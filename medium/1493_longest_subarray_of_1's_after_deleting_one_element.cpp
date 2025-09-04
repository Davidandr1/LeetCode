//https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int maxSize = 0;
        int deletedZero = 1;
        for(int right = 0;right<nums.size();++right){
            if(nums[right]==0){
                deletedZero--;
            }
            while(deletedZero<0){
                if(nums[left]==0){
                    deletedZero++;
                }
                left++;
            }
            maxSize=max(maxSize,right-left+1);
        }
        return maxSize-1;
    }
};