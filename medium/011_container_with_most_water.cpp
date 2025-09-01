//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int biggest=0;

        while(left<right){
            int smallerNum = min(height[left],height[right]);
            int temp = (right-left) * smallerNum;
            biggest = max(biggest,temp);
            if(height[left]< height[right]){
                left++;
            }else{
                right--;
            }
        }
        return biggest;
    }
};

