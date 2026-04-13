class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
        vector<int> diff(n);

        int total = 0;

        // assume mouse 2 eats all
        for(int i = 0; i < n; i++){
            total += reward2[i];
            diff[i] = reward1[i] - reward2[i];
        }

        // sort differences
        sort(diff.begin(), diff.end(), greater<int>());

        // pick top k advantages
        for(int i = 0; i < k; i++){
            total += diff[i];
        }

        return total;
    }
};