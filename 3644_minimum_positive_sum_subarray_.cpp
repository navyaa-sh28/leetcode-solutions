class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n && j < i + r; j++) {
                sum += nums[j];

                int len = j - i + 1;

                if (len >= l && len <= r && sum > 0) {
                    if (minsum == -1 || sum < minsum) {
                        minsum = sum;
                    }
                }
            }
        }

        return minsum;
    }
};