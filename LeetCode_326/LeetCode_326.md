### LeetCode 第三百二十六题 Power of Three
 - Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.
 ```
Given an integer, write a function to determine if it is a power of three.

Example 1:
Input: 27
Output: true

Example 2:
Input: 0
Output: false

Example 3:
Input: 9
Output: true

Example 4:
Input: 45
Output: false

Follow up:
Could you do it without using any loop / recursion?
 ```
 - 解法：
 ```
class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxPower = (int)pow(3,(int)(log(0x7fffffff)/log(3)));
        return  n > 0 && (maxPower % n == 0) ? true : false;
    }
};
```
