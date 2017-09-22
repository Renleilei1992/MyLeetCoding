### LeetCode 第六百八十题 Valid Palindrome II
 - Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.
 ```
 Example 1:
    Input: "aba"
    Output: True
 Example 2:
    Input: "abca"
    Output: True
    Explanation: You could delete the character 'c'.
 ```
 - 解法：
 ```
 class Solution {
 public:
    bool validPalindrome(string s) {
        int i, j;
        int si, sj;
        int len = s.size();
        int wayCount = 0;
        for(i=0, j=len-1; i < j; i++, j--){
            if(s[i] == s[j])
                continue;
            else{
                if(wayCount == 2)
                    return false;
                if(wayCount == 1){
                    wayCount++;
                    i = si;
                    j = sj;
                    j++;
                }
                if(wayCount == 0){
                    wayCount++;
                    si = i;
                    sj = j;
                    i--;
                }
            }
        }
        return true;
    }
 };

 ```
