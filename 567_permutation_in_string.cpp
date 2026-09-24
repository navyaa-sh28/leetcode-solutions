class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        vector<int> f1(26, 0), f2(26, 0);

        // 1. Populate frequencies for the first window
        for (int i = 0; i < s1.size(); i++) {
            f1[s1[i] - 'a']++;
            f2[s2[i] - 'a']++;
        }

        if (f1 == f2) {
            return true;
        }

        // 2. Slide the window across s2
        for (int i = s1.size(); i < s2.size(); i++) {
            f2[s2[i] - 'a']++;                     // Add new character entering the window
            f2[s2[i - s1.size()] - 'a']--;       // Remove old character exiting the window

            if (f1 == f2) {
                return true;
            }
        }

        return false;
    }
};