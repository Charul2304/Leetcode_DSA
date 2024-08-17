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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) return head;
        int n=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        int ops=k%n;
        if (ops == 0) return head;
        int moves=n-ops;
        ListNode* tail=head;
        for(int i=1;i<moves;i++){
            tail=tail->next;
        }
        ListNode* res=tail->next;
        tail->next=NULL;
        temp->next=head;
        return res;
    }
};