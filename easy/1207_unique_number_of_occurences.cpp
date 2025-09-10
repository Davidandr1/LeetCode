//https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> counts;
        for(int num:arr){
            counts[num]++;
        }
        set<int> freq;
        for(auto &p:counts){
            if(freq.count(p.second)){
                return false;
            }
            freq.insert(p.second);
        }
        return true;
    }
};