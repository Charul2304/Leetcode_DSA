// class Solution {
// public:
//     vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//         vector<vector<int>> ans;
//         priority_queue<pair<int,vector<int>>> pq; 
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 int sum=nums1[i]+nums2[j];
//                 if(pq.size()<k){
//                     pq.push({sum,{nums1[i],nums2[j]}});
//                 }
//                 else if(sum<pq.top().first){
//                     pq.pop();
//                     pq.push({sum,{nums1[i],nums2[j]}});
//                 }
//                 else if(sum>pq.top().first){
//                     break;
//                 }
//             }
//         }
//         while(!pq.empty()){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>pq;     //Max Heap
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
               int sum=nums1[i]+nums2[j];
                 //only for first iteration until size is k
                if(pq.size() < k){
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                 // here compare sum with the top of pq 
                else if(pq.top().first > sum){
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                else{
                    break;
                }
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};
