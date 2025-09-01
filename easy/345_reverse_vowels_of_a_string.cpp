//https://leetcode.com/problems/reverse-vowels-of-a-string/
class Solution {
public:
    string reverseVowels(string s) {
    const char *ptr1 = s.c_str();
    const char *ptr2 = s.c_str();
    char temp;
    int j=s.size()-1;

    for(int i = 0; i<s.size(); i++){
        
        if((*(ptr1+i) == 'A' || *(ptr1+i) == 'a' ||
            *(ptr1+i) == 'E' || *(ptr1+i) == 'e' ||
            *(ptr1+i) == 'I' || *(ptr1+i) == 'i' ||
            *(ptr1+i) == 'O' || *(ptr1+i) == 'o' ||
            *(ptr1+i) == 'U' || *(ptr1+i) == 'u')){
            if(j<=i){
                break;
            }
            while(!(*(ptr2+j) == 'A' || *(ptr2+j) == 'a' ||
            *(ptr2+j) == 'E' || *(ptr2+j) == 'e' ||
            *(ptr2+j) == 'I' || *(ptr2+j) == 'i' ||
            *(ptr2+j) == 'O' || *(ptr2+j) == 'o' ||
            *(ptr2+j) == 'U' || *(ptr2+j) == 'u')){
                j--;
                if(j<=i){
                    break;
                }
            }
            if(j<=i){
                    break;
                }
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
    }
      return s;  
    }
};