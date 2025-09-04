//https://leetcode.com/problems/max-consecutive-ones-iii/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int maxSize = 0;
        for(int right = 0;right<nums.size();++right){
            if(nums[right]==0){
                k--;
            }
            while(k<0){
                if(nums[left]==0){
                    k++;
                }
                left++;
            }
            maxSize = max(maxSize, right-left+1);
        }
        return maxSize;
    }
};
