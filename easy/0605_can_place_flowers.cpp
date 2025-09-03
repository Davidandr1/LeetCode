//https://leetcode.com/problems/can-place-flowers/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){return true;}
        int size = flowerbed.size();
        if(size==1){
            if(flowerbed[0]==0){
                return true;
            }else{
                return false;
            }
        }
        for(int i = 0; i < size; i++){
            if(flowerbed[i]!=1){
                bool emptyLeft = (i==0||flowerbed[i-1]==0);
                bool emptyRight = (i == size-1 || flowerbed[i+1]==0);
                if(emptyLeft && emptyRight){
                    flowerbed[i] = 1;
                    n = n-1;
                }
                if(n==0){
                    return true;
                }
            }
        }
    return n==0;
    }
};