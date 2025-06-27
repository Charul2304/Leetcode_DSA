/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int counta=0;
        int countb=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            counta++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            countb++;
            temp2=temp2->next;
        }
        int d=abs(counta-countb);
        temp1=headA;
        temp2=headB;
        if(counta>countb){
            while(d--){
                temp1=temp1->next;
            }
        }
        else if(countb>counta){
            while(d--){
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2) return temp2;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};