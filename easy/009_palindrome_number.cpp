//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        int original = x;
        int remainder = 0;
        int result = 0;
        if(x==0){return true;}
        while(x>0){
            remainder = x%10;
            if(result > (INT_MAX - remainder)/ 10){return false;}
            result = result*10+remainder;
            x=x/10;
            if(result == original){
                return true;
            }
        }
        return false;
    }
};