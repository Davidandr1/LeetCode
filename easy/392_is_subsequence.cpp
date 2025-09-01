//https://leetcode.com/problems/is-subsequence/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        const char* first = s.c_str();
        const char* second = t.c_str();
        while(*first&&*second){
            if(*first==*second){
                first++;
            }
            second++;
        }
        return *first=='\0';
    }
};