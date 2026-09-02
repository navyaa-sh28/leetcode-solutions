class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        for(int i=0;i<chars.size();){
            int count=0;
            char al=chars[i];
            while(i<chars.size()&&chars[i]==al){
                count++;
                i++;
            }
            ans+=al;
            if(count>1){
                ans+=to_string(count);
            }
        }
        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }
        return ans.size();
    }
};