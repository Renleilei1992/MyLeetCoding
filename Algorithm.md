
## 基础算法入门

#### 递归
    - 递归入门之 判断字符串是否是 ***回文*** [形如 level aba aaabbbaaa 的字符串]
    ```
    #include <iostream>
    #include <string.h>
    using namespace std;
    
    bool fun(int before, int after, char *str, int length)
    {
        if(length == 0 || length == 1)
            return true;
        if(str[before] != str[after])
            return false;
        return fun(before+1, after-1, str, length-2);
    }

    int main()
    {
        char str[] = "aaabbbaaa";
        int len = strlen(str);

        if(fun(0, len-1, str, len)){
            cout<<str<<" 是回文! "<<endl;
        }else{
            cout<<str<<" 不是回文! "<<endl;
        }
    }
    ```
