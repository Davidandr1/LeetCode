//https://leetcode.com/problems/merge-strings-alternately/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newString;
        int size1 = word1.size();
        int size2 = word2.size();
        int sizeOfLoop = 0;
        const char* ptr1 = word1.c_str();
        const char* ptr2 = word2.c_str();
        if(size1<=size2){
            sizeOfLoop = size1;
        }else{
            sizeOfLoop = size2;
        }
        for(int i = 0;i<sizeOfLoop;i++){
            newString.append(1,*(ptr1+i));
            newString.append(1,*(ptr2+i));
        }
        if(sizeOfLoop >= size1&&sizeOfLoop < size2){
            for(int i = sizeOfLoop;i<size2;i++){
               newString.append(1,*(ptr2+i));
            }
        }
        if(sizeOfLoop >= size2&&sizeOfLoop < size1){
            for(int i = sizeOfLoop;i<size1;i++){
                newString.append(1,*(ptr1+i));
            }
        }
        return newString;
    }
};