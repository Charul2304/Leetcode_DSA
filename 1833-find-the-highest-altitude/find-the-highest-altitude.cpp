class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> presum;
        presum.push_back(0);
        for(int i=0;i<gain.size();i++){
            presum.push_back(gain[i]+presum[i]);
        }
        return *max_element(presum.begin(),presum.end());
    }
};