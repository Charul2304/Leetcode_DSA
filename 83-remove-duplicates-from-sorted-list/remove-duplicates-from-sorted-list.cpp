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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) return head;
        while(temp->next!=NULL){
            if(temp->val==temp->next->val){
                ListNode* delnode=temp->next;
                temp->next=delnode->next;
                delete delnode;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};