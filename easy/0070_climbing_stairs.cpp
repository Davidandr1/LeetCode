//https://leetcode.com/problems/climbing-stairs/
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
           return n;
        }
        int answer2 = 1;
        int answer1 = 2;
        int solution = 0;

        for (int i = 3; i <= n; ++i) {
            solution = answer1 + answer2;
            answer2 = answer1;
            answer1 = solution;
        }
        return solution;
    }
};