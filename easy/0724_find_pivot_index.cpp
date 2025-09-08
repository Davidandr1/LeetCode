//https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int leftSide[size];
        int rightSide[size];
        int sum = 0;
        for(int i = 0;i<size;++i){
            leftSide[i] = sum;
            sum = sum+nums[i];
        }
        sum = 0;
        for(int i = size-1;i>-1;--i){
            rightSide[i]= sum;
            sum = sum+nums[i];
        }
        for(int i = 0;i<size;++i){
            if(leftSide[i]==rightSide[i]){
                return i;
            }
        }
        return -1;

    }
};