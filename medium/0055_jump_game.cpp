//https://leetcode.com/problems/jump-game/
class Solution {
public:
    bool canJump(vector<int>& nums) {
    int present = nums.size();
    int goal = present - 1;
    for(int i = nums.size()-2;i>-1;i--){
        if(i+nums[i]>=goal){
            goal = i;
        }
    }  
    return goal == 0;
    }
};
