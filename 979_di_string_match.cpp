class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int n=s.size();
       int low=0;
       int high=n;
       for(char c:s){
        if(c=='I'){
            ans.push_back(low);
            low++;
        }
        else{
            ans.push_back(high);
            high--;
        }
       }
       ans.push_back(low);
       return ans;
    }
};