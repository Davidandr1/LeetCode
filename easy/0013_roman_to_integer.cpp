//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:

    int value(char v){
        if(v=='I'){return 1;}
        else if(v=='V'){return 5;}
        else if(v=='X'){return 10;}
        else if(v=='L'){return 50;}
        else if(v=='C'){return 100;}
        else if(v=='D'){return 500;}
        else if(v=='M'){return 1000;}
    return 0;
    }
    int romanToInt(string s) {
        int ans = 0;
        for(int i = s.length()-1;i>=0;--i){
            int main = value(s[i]);
            int checkBehind = 0;
            if(i>0){
            checkBehind = value(s[i-1]);
            }
            if(main>checkBehind&&i>0){
                ans = ans+(value(s[i])-value(s[i-1]));
                --i;
            }else{
                ans = ans+value(s[i]);
            }
        }
        return ans;
    }
};