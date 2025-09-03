//https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
#include <iostream>
#include <string>
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp;
        string ans;
        int j = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=' '){
                temp += s[i]; 
            }else if(!temp.empty()){
                words.push_back(temp);
                temp.clear();
                j++;
            }
        }
        if(!temp.empty()){
            words.push_back(temp);
            j++;
        }
        for (int i = j-1; i>=0;i--){
            ans += words[i];
            if(i>0){
                ans += ' ';
            }
        }
    return ans;
    }
};