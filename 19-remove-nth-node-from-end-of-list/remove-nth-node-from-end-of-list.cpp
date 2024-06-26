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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int counter=0;
        while(temp!=NULL){
            counter++;
            temp=temp->next;
        }
        if(n==counter){
            ListNode* to_delete=head;
            head=head->next;
            delete to_delete;
            return head;
        }

        ListNode* cur=head;
        int c2=0;
        while(c2!=counter-n-1){
            c2++;
            cur=cur->next;
        }
        ListNode* to_delete=cur->next;
        cur->next=cur->next->next;
        delete to_delete;
        return head;
    }
};