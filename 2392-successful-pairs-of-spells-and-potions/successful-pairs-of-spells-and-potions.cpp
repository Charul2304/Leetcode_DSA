class Solution {
public:
    int upperbound(const vector<int>& arr, double x) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans(n);

        for (int i = 0; i < n; ++i) {
            double el = (double)success / spells[i];
            int it = upperbound(potions, el);
            cout<<it<<endl;
            if (it == -1) {
                ans[i] = 0;
            } else {
                ans[i] = m - it;
            }
        }

        return ans;
    }
};
