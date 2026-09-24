class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum1 = 0;

        // Step 1: Get the initial sum of the first k cards (all taken from the left)
        for (int i = 0; i < k; i++) {
            sum1 += cardPoints[i];
        }

        int max_sum = sum1;

        // Step 2: Slide the window by replacing cards from the left with cards from the right
        int j = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            sum1 += cardPoints[j] - cardPoints[i];
            max_sum = max(max_sum, sum1);
            j--;
        }

        return max_sum;
    }
};