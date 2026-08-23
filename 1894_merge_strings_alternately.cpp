class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int x=min(word1.size(),word2.size());
        string ans="";
        while(i<x){
          ans+=word1[i];
          ans+=word2[i];
          i++;
        }
        if(word1.size()>word2.size()){
            while(i!=word1.size()){
                ans+=word1[i];
                i++;
            }
        }
        else if(word2.size()>word1.size()){
            while(i!=word2.size()){
                ans+=word2[i];
                i++;
            }
        }
        return ans;
    }
};