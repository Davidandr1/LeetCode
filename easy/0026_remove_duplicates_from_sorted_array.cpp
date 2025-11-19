//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<1){return 0;}
        int uniqueNum = 1;
        for(int i = 1;i<nums.size();++i){
            if(nums[i]!=nums[i-1]){
                nums[uniqueNum] = nums[i];
                ++uniqueNum;
            }
        }
        return uniqueNum;
    }   
};
