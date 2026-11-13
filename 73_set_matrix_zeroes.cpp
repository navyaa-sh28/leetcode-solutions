class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        unordered_set<int> rowsToZero;
        unordered_set<int> colsToZero;
        
        // Pass 1: Record all rows and columns that contain a zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rowsToZero.insert(i);
                    colsToZero.insert(j);
                }
            }
        }
        
        // Pass 2: Set matrix cells to zero if their row or column is marked
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rowsToZero.count(i) || colsToZero.count(j)) { //found or not found
                    matrix[i][j] = 0;
                }
            }
        }
    }
};