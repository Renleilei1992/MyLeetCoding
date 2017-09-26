
/* 判断一个数字是否是回文  */


#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    int flag;
    int i = 0, j = 0;
    int num[];
    if(x >= 0){
        flag = 1;
    }else{
        flag = -1;
        return false;
    }
    
    while(p){
       num[i] = p%10;
       p = p/10;
       i++;
    }
        
    for(i,j; j < i; j++, i--){
       if(num[i] == num[j]){
           continue;
       }else{
           return false;
        }
    }
    return true;
};



int main()
