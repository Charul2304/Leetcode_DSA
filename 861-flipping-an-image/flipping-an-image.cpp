class Solution {
public:
    void flip(vector<int>& arr){
        for(int i=0;i<arr.size();i++){
            arr[i]=!arr[i];
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>> temp=image;
        for(int i=0;i<n;i++){
            reverse(temp[i].begin(),temp[i].end());
            flip(temp[i]);
        }
        return temp;
    }
};