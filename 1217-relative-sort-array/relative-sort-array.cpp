class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> temp;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    ans.push_back(arr1[j]);
                    
                }
            }
        }
        for(int i=0;i<arr1.size();i++){
            if(find(arr2.begin(),arr2.end(),arr1[i])==arr2.end()){
                temp.push_back(arr1[i]);
            }
        }
        sort(temp.begin(),temp.end());
        for(auto x:temp){
            ans.push_back(x);
        }
        return ans;
    }
};