class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(i < nums.size() && nums[i] != 0){
                sum++;
                i++;
            }
            if(sum>count){
                count=sum;
            }
        }
        return count;
    }
};