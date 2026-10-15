class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char c:t){
            mp[c]++;
        }
        int count=0;
        int j=0;
        int st=0;
        int len=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
              mp[s[i]]--;
              if(mp[s[i]]>=0)
              count+=1;
            }
            while(count==t.size()){
                if(len>(i-j+1)){
                    len=(i-j+1);
                    st=j;
                }
                if(mp.find(s[j])!=mp.end()){
              mp[s[j]]++;
              if(mp[s[j]]>0)
              count-=1;
            }
            j++;
            }
        }
        if(len==INT_MAX)return "";
        return s.substr(st,len);
    }
};