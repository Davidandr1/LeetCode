//https://leetcode.com/problems/increasing-triplet-subsequence/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX;
        int biggest = INT_MAX;

        for (int x : nums) {
        if (x <= smallest) {
            smallest = x;
        } else if (x <= biggest) {
            biggest = x;
        } else {
            return true;
        }
    }
    return false;
    }
};