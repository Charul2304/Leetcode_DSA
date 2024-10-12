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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        stack<ListNode*> st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        while(!st.empty()){
            ListNode* newnode=st.top();
            st.pop();
            curr->next=newnode;
            curr=newnode;
        }
        curr->next=NULL;
        return dummy->next;
    }
};