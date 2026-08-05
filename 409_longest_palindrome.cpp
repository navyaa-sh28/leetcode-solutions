class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a') {
                lower[s[i]-'a']++;
            }
            else{
                upper[s[i]-'A']++;
            }
                }
                int count=0;
                bool odd=0;
                for(int j=0;j<26;j++){
                 if(lower[j]%2==0){
                    count+=lower[j];
                 }
                 else{
                    count+=lower[j]-1;
                    odd=1;
                 }
                 if(upper[j]%2==0){
                    count+=upper[j];
                 }
                 else{
                    count+=upper[j]-1;
                    odd=1;
                 }
                }
                return count+odd;
    }
};