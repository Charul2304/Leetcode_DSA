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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        while(temp->next!=NULL){
            ListNode* nextnode=temp->next;
            ListNode* newnode=new ListNode(__gcd(temp->val,nextnode->val));
            temp->next=newnode;
            newnode->next=nextnode;
            temp=nextnode;
        }
        return head;
    }
};