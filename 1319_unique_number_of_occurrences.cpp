class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i:arr){
            freq[i]++;
        }
        unordered_set<int>seen_freq;
        for(auto pair:freq){
            int count=pair.second;
            if(seen_freq.count(count)){
                return false;
            }
            seen_freq.insert(count);
        }
        return true;
    }
};