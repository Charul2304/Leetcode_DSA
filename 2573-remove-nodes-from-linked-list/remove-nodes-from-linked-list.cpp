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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL,*temp=head;
        while(temp!=NULL)
        {
            head=temp->next;
            temp->next=prev;
            prev=temp;
            temp=head;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode* current=head;
        while(current->next)
        {
            if(current->next->val < current->val)
            {
                current->next=current->next->next;
            }
            else
                current=current->next;
        }
        head=reverse(head);
        return head;
    }
};