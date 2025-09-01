//https://leetcode.com/problems/length-of-last-word/
class Solution {
#include <iostream>
#include <cctype>
public:
    int lengthOfLastWord(string s) {
        int wordCounter = 0;
        for(int i = 0; i<s.length();i++){
            if(isalpha(s[i])){
                wordCounter++;
            }else{
                for(int j = i; j<s.length();j++){
                    if(isalpha(s[j])){
                        wordCounter = 0;
                        break;
                    }
                }
            }
        }
        return wordCounter;
    }
};