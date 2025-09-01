//https://leetcode.com/problems/greatest-common-divisor-of-strings/description/
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1){return "";}
        if(str1.size() == 0|| str2.size()==0){return "";}
        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
    }
private:
    int gcd(int a, int b){
        if (b==0){
            return a;
        }else{
            return gcd(b,a%b);
        }
    }
};