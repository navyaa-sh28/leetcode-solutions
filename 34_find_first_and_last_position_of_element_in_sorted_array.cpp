class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target ==nums[mid]){
                ans[0]=mid;
                high=mid-1; //search further left for first occurance of target
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //2nd binary search for rightmost occurance
         low=0;
         high=nums.size()-1; 
        while(low<=high){
            int mid =low+(high-low)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans; 
    }
};