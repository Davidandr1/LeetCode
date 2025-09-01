//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int biggest=0;
        vector<bool> result;
        for(int i = 0; i<candies.size();i++){
            if(candies[i]>biggest){
                biggest = candies[i];
            }
        }
        for(int i = 0; i<candies.size();i++){
            if((candies[i]+extraCandies)>=biggest){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
    return result;
    }
};