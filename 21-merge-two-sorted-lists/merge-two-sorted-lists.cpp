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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(0);
        ListNode* current=dummy;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <= temp2->val){
                current->next=temp1;
                current=temp1;
                temp1=temp1->next;
            }
            else if(temp2->val < temp1->val){
                current->next=temp2;
                current=temp2;
                temp2=temp2->next;
            }
          
        }
        if(temp1!=NULL){
            current->next=temp1;
        }
        if(temp2!=NULL){
            current->next=temp2;
        }
        return dummy->next;
    }
};