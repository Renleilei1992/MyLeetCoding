
### LeetCode 第九题 Palindrome Number
 - Determine whether an integer is a palindrome. Do this without extra space.
 ```
 Example 1:
    Input: "12321"
    Output: True
 Example 2:
    Input: "1234"
    Output: false
 ```
 - 解法一：数组
```
bool isPalindrome(int x) {
    int flag;
    int i = 0, j = 0;
    int num[20];
    if(x >= 0){
        flag = 1;
    }else{
        flag = -1;
        return false;
    }

    while(x){
       num[i] = x%10;
       x = x/10;
       i++;
    }

    for(i=i-1,j=0; j < i; j++, i--){
       if(num[i] == num[j]){
           continue;
       }else{
           return false;
       }
    }
    return true;
}
```
 - 解法二：容器map或者vector
```
bool isPalindrome(int x) {
    if(x < 0)
        return false;

    int i = 1;

    map<int, int> mapNum;
    while(x){
        mapNum[i] = x%10;
        x = x/10;
        i++;
    }
    i = i - 1;
    for(int j = 1; j < i; j++, i--){
        if(mapNum.count(j) && mapNum.count(i)){
            if(mapNum[i] == mapNum[j]){
                continue;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
    return true;
}
```
