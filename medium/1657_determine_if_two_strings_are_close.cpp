//https://leetcode.com/problems/determine-if-two-strings-are-close/
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()) {
            return false;
        }

        vector<int> freq1(26, 0), freq2(26, 0);
        for (char c : word1) freq1[c - 'a']++;
        for (char c : word2) freq2[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0) != (freq2[i] == 0)) {
                return false;
            }
        }
        multiset<int> set1, set2;
        for (int f : freq1) if (f > 0) set1.insert(f);
        for (int f : freq2) if (f > 0) set2.insert(f);

        return set1 == set2;
    };
};