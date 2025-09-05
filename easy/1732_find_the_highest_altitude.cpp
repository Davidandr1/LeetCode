//https://leetcode.com/problems/find-the-highest-altitude/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prevSum = 0;
        int maxSize = 0;
        int size = gain.size();
        for(int i = 0;i<size;++i){
            if(i==0&&size!=1){
            }else if(size==1){
                return max(gain[i], maxSize);
            }else if(i==size-1){
                prevSum = prevSum + gain[i-1];
                maxSize = max(maxSize, prevSum);
                prevSum = prevSum + gain[i];
            }else{
                prevSum = prevSum + gain[i-1];
            }
            maxSize = max(maxSize, prevSum);
        }
        return maxSize;
    }
};
