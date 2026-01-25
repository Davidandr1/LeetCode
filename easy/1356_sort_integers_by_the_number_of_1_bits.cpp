//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
class Solution {
public:
    int binaryCounter(int x){
        int counter = 0;
        while(x>0){
            if(x&1){
                ++counter;
            }
            x = x>>1;
        }
        return counter;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> v;

        for(int x:arr){
            v.push_back({binaryCounter(x),x});
        }

        sort(v.begin(), v.end());
        for(int i = 0;i<v.size();++i){
            arr[i]= v[i].second;
        }

        return arr;
    }
};