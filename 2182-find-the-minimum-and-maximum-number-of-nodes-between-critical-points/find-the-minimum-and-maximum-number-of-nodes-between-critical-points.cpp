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
    int findmin(vector<int>& arr){
        int ans=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            ans=min(ans,arr[i+1]-arr[i]);
        }
        return ans;
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr;
        vector<int> ans;
        ListNode* prev=head;
        head=head->next;
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            if((temp->val > prev->val && temp->val > temp->next->val)
            || (temp->val < prev->val && temp->val < temp->next->val)){
                arr.push_back(count);
            }
            prev=prev->next;
            temp=temp->next;
        }
        int n=arr.size();
        if(n<2){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(findmin(arr));
            ans.push_back(arr[n-1]-arr[0]);
        }
        return ans;
    }
};