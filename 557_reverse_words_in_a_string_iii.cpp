class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int i = 0; i <= s.size(); i++) {
            
            // Word ends when we reach a space or end of string
            if (i == s.size() || s[i] == ' ') {
                
                int left = start;
                int right = i - 1;

                // Reverse the current word
                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                start = i + 1;
            }
        }

        return s;
    }
};