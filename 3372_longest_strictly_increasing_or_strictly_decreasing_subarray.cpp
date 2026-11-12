class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            int j=i;
            int inc=1;
            int dec=1;
            while(j+1<nums.size()&&nums[j+1]>nums[j]){
                  inc++;
                  j++;
            }
            j = i;
            while (j + 1 < nums.size() && nums[j + 1] < nums[j]) {
                dec++;
                j++;
            }
            maxlen=max({maxlen,inc,dec});
        }
        return maxlen;
    }
};