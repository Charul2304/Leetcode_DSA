struct Node{
    int val;
    int key;
    Node* next;
    Node* prev;
    Node(int k,int v){
        key=k;
        val=v;
    }
};
class LRUCache {
public:
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    int cap;
    unordered_map<int,Node*> mp;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addNode(Node* newnode){
        Node* temp=head->next;
        newnode->next=temp;
        temp->prev=newnode;
        head->next=newnode;
        newnode->prev=head;
    }

    void deleteNode(Node* delnode){
        Node* delprev=delnode->prev;
        Node* delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }

    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node* ansnode=mp[key];
            int ans=ansnode->val;
            mp.erase(key);
            deleteNode(ansnode);
            addNode(ansnode);
            mp[key]=head->next;
            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* existnode=mp[key];
            deleteNode(existnode);
            mp.erase(key);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */