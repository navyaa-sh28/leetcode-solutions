class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int pos = 0; // Positives go to even indices: 0, 2, 4, ...
        int neg = 1; // Negatives go to odd indices: 1, 3, 5, ...
        
        // Loop through every number in the input array sequentially
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans[pos] = nums[i];
                pos += 2; // Move positive index pointer forward by 2
            } else {
                ans[neg] = nums[i];
                neg += 2; // Move negative index pointer forward by 2
            }
        }
        
        return ans;
    }
};