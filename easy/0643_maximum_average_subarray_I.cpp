//https://leetcode.com/problems/maximum-average-subarray-i/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size = nums.size();
        int maxSize = 0;
        int currSize=0;
        for(int i = 0; i<k;++i){
            maxSize = maxSize + nums[i];
        }
        currSize = maxSize;
        for(int i = 0;i<(size-k);++i){
            currSize = currSize-nums[i]+nums[i+k];
            maxSize = max(maxSize, currSize);
        }
        double max_size = maxSize;        
    return max_size/k;    
    }
};