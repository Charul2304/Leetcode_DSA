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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* newnode=new ListNode(temp->val);
            if(temp->val!=val){
                tail->next=newnode;
                tail=newnode;
            }
            temp=temp->next;
        }
        ListNode* result=dummy->next;
        delete dummy;
        return result;
    }
};