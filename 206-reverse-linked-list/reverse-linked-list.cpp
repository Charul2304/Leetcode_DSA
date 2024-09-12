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
        if(head==NULL) return NULL;
        ListNode* temp=head;
        ListNode* dummy=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=dummy;
            dummy=temp;
            temp=front;
        }
        return dummy;
    }
};