### LeetCode 第一题
- Given an array of integers, return indices of the two numbers such that they add up to a specific target.
- You may assume that each input would have exactly one solution, and you may not use the same element twice.
```
Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```
- 解法一：暴力而易思考
```
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int N = nums.size();
        for(int i = 0; i < N-1; i++) {
            for(int j = i+1; j < N; j++) {
                if(nums[i] + nums[j] == target) {
                    answer.push_back(i+1);
                    answer.push_back(j+1);
                    return answer;
                }
            }
        }
        return answer;
    }
};
```

