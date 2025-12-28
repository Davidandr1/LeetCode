//https://leetcode.com/problems/removing-stars-from-a-string/
class Solution {
public:
    string removeStars(string s) {
        int size = s.size();
        string newWord;
        for(int i = 0;i<size;++i){
            if(s[i]=='*'){
                if(!newWord.empty()){
                    newWord.pop_back();
                }
            }else{
                newWord.push_back(s[i]);
            }
        }
        return newWord;
    }
};