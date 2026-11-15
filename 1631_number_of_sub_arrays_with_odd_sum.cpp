class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7;
        int count = 0;
        int prefixSum = 0;
        
        // evenCount starts at 1 to represent an empty prefix (sum = 0)
        int evenCount = 1; 
        int oddCount = 0;

        for (int num : arr) {
            prefixSum += num;

            if (prefixSum % 2 != 0) {
                // Current prefix sum is ODD.
                // Subtracting any previous EVEN prefix sum yields an ODD subarray sum.
                count = (count + evenCount) % MOD;
                oddCount++;
            } else {
                // Current prefix sum is EVEN.
                // Subtracting any previous ODD prefix sum yields an ODD subarray sum.
                count = (count + oddCount) % MOD;
                evenCount++;
            }
        }

        return count;
    }
};