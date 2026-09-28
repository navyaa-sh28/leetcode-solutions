class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int n=nums.size();
        for(auto pair:mp){
            if(pair.second>n/2){
                return pair.first;
            }
        }
        return -1;
    }
};