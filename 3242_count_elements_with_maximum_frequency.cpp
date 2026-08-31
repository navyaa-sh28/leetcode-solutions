class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            count=max(count,freq[nums[i]]);
        }
        int num=0;
        for(auto it:freq){
            if(it.second==count){
                num+=count;
            }
        }
        return num;
    }
};