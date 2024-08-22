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
        ListNode* temp=headA;
        while(temp!=NULL){
            len1++;
            temp=temp->next;
        }
        int len2=0;
        temp=headB;
        while(temp!=NULL){
            len2++;
            temp=temp->next;
        }
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        if(len2>len1){
            int d=len2-len1;
            while(d--){
                temp2=temp2->next;
            }
        }
        else if(len1 > len2){
            int d=len1-len2;
            while(d--){
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