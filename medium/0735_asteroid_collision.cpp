//https://leetcode.com/problems/asteroid-collision/
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for(int i = 0; i < asteroids.size(); i++) {
            int current = asteroids[i];
            bool destroyed = false;
            
            while(!result.empty() && result.back() > 0 && current < 0) {
                if(abs(result.back()) < abs(current)) {
                    result.pop_back();
                    continue; 
                } else if(abs(result.back()) == abs(current)) {
                    result.pop_back();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed) {
                result.push_back(current);
            }
        }
        return result;
    }
};