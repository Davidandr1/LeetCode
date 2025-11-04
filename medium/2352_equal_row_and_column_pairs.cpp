//https://leetcode.com/problems/equal-row-and-column-pairs/
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int size = grid.size();
        unordered_map<string,int> rowMap;
        for(int i = 0;i<size;++i){
            string key;
            for(int j = 0;j<size;++j){
                key += to_string(grid[i][j]) + ",";
            }
            rowMap[key]++;
        }

        int count = 0;
        for(int i = 0;i<size;++i){
            string key;
            for(int j = 0;j<size;++j){
                key += to_string(grid[j][i]) + ",";
            }
            if(rowMap.find(key) != rowMap.end()){
                count += rowMap[key];
            }
        }
        return count;
    }
};