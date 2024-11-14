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
        if(head==NULL || (head->next==NULL && head->val==val)) return NULL;
        ListNode* temp=head;
        while(temp->next!=NULL){
            if(temp->next->val==val){
                ListNode* delnode=temp->next;
                temp->next=delnode->next;
                delete delnode;
            }
            else{
                temp=temp->next;
            }
        }
        if(head->val==val) return head->next;
        else return head;
    }
};