//https://leetcode.com/problems/valid-parentheses/
class Solution {
#include <stack>
#include <string>
public:
    bool isValid(string s) {
        stack<char> parent;
        for(int i = 0; i<s.length();i++){
            if(s[i] =='('||s[i] =='['||s[i] =='{'){
                parent.push(s[i]);
            }
            if(s[i] ==')'){
                if(parent.empty()){return false;}
                if(parent.top() != '('){return false;}
                else{parent.pop();}
            }
            if(s[i] =='}'){
                if(parent.empty()){return false;}
                if(parent.top() != '{'){return false;}
                else{parent.pop();}
            }
            if(s[i] ==']'){
                if(parent.empty()){return false;}
                if(parent.top() != '['){return false;}
                else{parent.pop();}
            }            
        }
        if(!parent.empty()){return false;}
    return true;
    }
};