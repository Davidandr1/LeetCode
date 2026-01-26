//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int first = 0;
        
        for(int i = 0;i<s.length();++i){
            auto it = find(s.begin()+first, s.begin()+i,s[i]);
            if(it != s.begin()+i){
                first = distance(s.begin(),it)+1;
            }
            length = max(length, i-first+1);

        }
        return length;
    }
};