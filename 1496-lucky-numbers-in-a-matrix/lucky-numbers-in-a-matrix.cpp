class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        set<int> s1;
        for(int i=0;i<matrix.size();i++){
            s1.insert(*min_element(matrix[i].begin(),matrix[i].end()));
        }
        set<int> s2;
        for(int i=0;i<matrix[0].size();i++){
            int maxi=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                maxi=max(maxi,matrix[j][i]);
            }
            s2.insert(maxi);
        }
        int ans=-1;
        for(auto x:s1){
            if(s2.find(x)!=s2.end()){
                return {x};
                break;
            }
        }
        return {};
    }
};