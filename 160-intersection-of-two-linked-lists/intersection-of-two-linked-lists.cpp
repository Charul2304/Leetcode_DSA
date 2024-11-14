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
        if(headA==NULL || headB==NULL) return NULL;
        int len1=0;
        int len2=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            len1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            len2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        int diff=abs(len1-len2);
        if(len1<len2){
            while(diff--){
                temp2=temp2->next;
            }
        }
        else if(len1>len2){
            while(diff--){
                temp1=temp1->next;
            }
        }
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};