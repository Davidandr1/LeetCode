//https://leetcode.com/problems/ransom-note/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magCount;
        unordered_map<char,int> ransomCount;

        for(char c:ransomNote){
            ransomCount[c]++;
        }
        for(char c:magazine){
            magCount[c]++;
        }
        for(auto pair:ransomCount){
            if(magCount[pair.first]<pair.second){
                return false;
            }
        }
        return true;
    }
};