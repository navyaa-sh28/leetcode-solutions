class Solution {
public:
    string reverseVowels(string s) {
        string vowel="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowel+=s[i];
            s[i]='<';
            }
        }
        reverse(vowel.begin(),vowel.end());
        int k=0;
        for(int j=0;j<s.size();j++){
        if(s[j]=='<'){
            s[j]=vowel[k];
            k++;
        }
        }
        return s;
    }
};