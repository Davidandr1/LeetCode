//https://leetcode.com/problems/max-number-of-k-sum-pairs/
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int pairs = 0;
        for(int num : nums){
            int target = k-num;
            if(freq[target] > 0){
                freq[target]--;
                pairs++;
            }else{
                freq[num]++;
            }
        }
        return pairs;
    }
};