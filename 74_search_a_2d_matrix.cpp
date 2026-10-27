class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0;i<matrix.size();i++){
        //     int low=0;
        //     int high=matrix[i].size()-1;
        //     while(low<=high){
        //         int mid=low+(high-low)/2;
        //         if(target<matrix[i][mid]){
        //             high=mid-1;
        //         }
        //         else if(target>matrix[i][mid]){
        //             low=mid+1;
        //         }
        //         else if(target==matrix[i][mid]){
        //             return true;
        //         }
        //     }
        // }

        int m=matrix.size();
        int n=matrix[0].size();

        int low=0;
        int high=m*n-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            int row=mid/n;   //converting the 1d index of mid into rows and columns to find where the element is in 2d array
            int col=mid%n;
            if(target<matrix[row][col]){
                high=mid-1;
            }
            else if(target>matrix[row][col]){
                low=mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};