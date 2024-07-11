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
    int pairSum(ListNode* head) {
        stack<int> st;
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int n=size/2;
        temp=head;
        while(n--){
            st.push(temp->val);
            temp=temp->next;
        }
        int maxsum=0;
        while(!st.empty()){
            int sum=st.top()+temp->val;
            st.pop();
            maxsum=max(maxsum,sum);
            temp=temp->next;
        }
        return maxsum;
    }
};