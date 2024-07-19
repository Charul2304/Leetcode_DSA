/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteFirst(ListNode* head){
        ListNode* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    void deleteBetween(ListNode* temp,ListNode* prev){
        prev->next=temp->next;
        delete temp;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int n=nums.size();
        ListNode* temp=head;
        ListNode* prev=NULL;
        set<int> s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        //     temp = head;
            while(temp!=NULL){
                if(s.find(temp->val) != s.end()){
                    if(prev==NULL){
                        head=deleteFirst(temp);
                        prev = NULL;
                        temp=head;
                    }
                    else{
                        ListNode* nextNode = temp->next;
                        deleteBetween(temp, prev);
                        temp = nextNode;
                    }
                }
                else{
                    prev=temp;
                    temp=temp->next;
                }
            }
        // }
        return head;
    }
};