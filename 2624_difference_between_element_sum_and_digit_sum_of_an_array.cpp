class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0&&nums[i]<=9){
                sum1+=nums[i];
                sum2+=nums[i];
            }
            else{
                int x=nums[i];
                while(x>0){
                   int rem=x%10;
                    sum1+=rem;
                    x=x/10;
                }
                sum2+=nums[i];
            }
        }
        return abs(sum1-sum2);
    }
};