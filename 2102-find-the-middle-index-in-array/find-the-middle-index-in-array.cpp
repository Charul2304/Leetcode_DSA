class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        for(int i=1;i<n;i++){
            prefix[i]=nums[i-1]+prefix[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i+1]+suffix[i+1];
        }
        for(int i=0;i<n;i++){
            cout<<prefix[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<suffix[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(prefix[i]==suffix[i]) return i;
        }
        return -1;
    }
};