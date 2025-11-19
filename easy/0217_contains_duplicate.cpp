//https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> check;
        for(int num:nums){
            if(check.count(num)){
                return true;
            }else{
                check.insert(num);
            }
        }
        return false;
    }
};