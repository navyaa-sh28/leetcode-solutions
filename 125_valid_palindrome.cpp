class Solution {
public:
    bool isPalindrome(string s) {
        string ori = "";

        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] + 32;
                }
                ori += s[i];
            }
        }

        string rev = ori;
        reverse(rev.begin(), rev.end());

        return ori == rev;
    }
};