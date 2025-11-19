//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> firstArr(nums1.begin(),nums1.end());
        unordered_set<int> inter;
        for(int num:nums2){
            if(firstArr.count(num)){
                inter.insert(num);
            }
        }
        return vector<int>(inter.begin(),inter.end());
    }
};