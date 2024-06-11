class Solution {
public:
    int f(int low,int high,vector<int>& arr, int target){
        if(low>high) return -1;
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target){
            return f(mid+1,high,arr,target);
        }
        else{
            return f(low,mid-1,arr,target);
        }
    }
    int search(vector<int>& nums, int target) {
        //recursive approach
        int low=0;
        int high=nums.size()-1;
        return f(low,high,nums,target);
    }
};