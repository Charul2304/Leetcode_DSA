class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        vector<int> final;
        for(int i=0;i<nums1.size();i++){
            final.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            final.push_back(nums2[i]);
        }
        sort(final.begin(),final.end());
        int n=final.size();
        int m=n/2;
        if(n%2==0){
            ans=((double)final[m]+final[m-1])/2;
        }
        else if(n%2!=0){
            ans=final[m];
        }
        return ans;
    }
};