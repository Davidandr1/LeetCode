//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
class Solution {
public:
    int maxVowels(string s, int k) {
        int size = s.length();
        int temp[size];
        int tempNum = 0;
        int maxSize = 0;
        for(int i = 0;i<size;++i){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                temp[i] = 1;
            }else{
                temp[i] = 0;
            }
            if(i<k){
                maxSize = maxSize + temp[i];
            }
        }
        tempNum = maxSize;
        for(int i = 0;i<size-k;++i){
            tempNum = tempNum - temp[i]+temp[i+k];
            maxSize = max(maxSize,tempNum);
        }
        return maxSize;
    }
           
};