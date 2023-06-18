/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
#include <cstdio>

using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else{
                //maxCount = std::Math.max(maxCount, count);
                count = 0;
            }
        }
        //return maxCount = std::Math.max(maxCount, count);
        return maxCount;
    }
};
// @lc code=end

