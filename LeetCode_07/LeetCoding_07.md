### LeetCode 第七题

- Reverse digits of an integer.
```
    Example1: x = 123, return 321
    Example2: x = -123, return -321
```

- 解法[solution]:
```
    #include <iostream>
    #include <limits.h>   //包含宏 INT_MAX INT_MIN

    using namespace std;

    int reverse(int x);

    int main(int argc,char **argv)
    {
        int j = 12345;
        cout<<"Ans = ["<<reverse(j)<<"]"<<endl;
    return 0;
    }

    int reverse(int x)
    {
        int y = 0;
        if(x < 0){
            y = -1 * x;
        }else{
            y = x;
        }
        int flag = (x == y) ? 1 : -1;
        long tmp = 0;
        while(y>=1){
            tmp = tmp*10 + y%10;
            y /= 10;
        }
        if(tmp * flag > INT_MAX || tmp * flag < INT_MIN){
            return 0;
        }
        return tmp * flag;
    }

```
