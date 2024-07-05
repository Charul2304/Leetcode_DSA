class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        sort(capacity.rbegin(),capacity.rend());
        int sum=0;
        for(auto x:apple){
            sum+=x;
        }
        int count=0;
        int i=0;
        while(sum>0){
            sum-=capacity[i];
            i++;
            count++;
        }
        return count;
    }
};