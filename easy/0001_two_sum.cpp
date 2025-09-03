//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int maybeTotal;
        for(int j = 0; j<nums.size();j++){
            for(int i = 0; i <nums.size();i++){
                if(j!=i){
                    maybeTotal = nums[j]+nums[i];
                    if(maybeTotal == target){
                        return {i,j}; 
                    }
                }
            }
        }
    return {};
    }
};