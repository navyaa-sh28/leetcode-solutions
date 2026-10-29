class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count = 0;

        for (int i = 0; i < timeSeries.size(); i++) {
            int j = timeSeries[i];
            int n = j + duration - 1;

            for (int k = j; k <= n; k++) {
                if (i + 1 < timeSeries.size() && timeSeries[i + 1] <= k) {
                    break;
                }
                count++;
            }
        }

        return count;
    }
};