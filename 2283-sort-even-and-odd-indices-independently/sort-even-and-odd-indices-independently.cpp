class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;

        // Separate numbers into even-indexed and odd-indexed vectors
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        // Sort even-indexed elements in ascending order
        sort(even.begin(), even.end());
        // Sort odd-indexed elements in descending order
        sort(odd.rbegin(), odd.rend());

        // Combine the sorted even and odd elements back into nums
        int evenIndex = 0;
        int oddIndex = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = even[evenIndex++];
            } else {
                nums[i] = odd[oddIndex++];
            }
        }

        return nums;
    }
};
