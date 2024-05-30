class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0, n = arr.size(), jor = 0;
        map<int, vector<int>> mp;
        for(int i = 0; i<n; ++i)
        {
            jor ^= arr[i];
            for(auto it: mp[jor]) ans += (i-it);
            mp[jor ^ arr[i]].push_back(i);
        }
        return ans;
    }
};