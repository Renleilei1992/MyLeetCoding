
/* 判断一个数字是否是回文  */


#include <iostream>
#include <map>

using namespace std;

/*
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
*/

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


int main()
{
	int num1 = 12321;
	int num2 = 1234;
	int num3 = -22;
	int num4 = 111111;
	int num5 = 1221;

	if(isPalindrome(num1)){
		cout<<num1<<" is Palindrome!!"<<endl;
	}else{
		cout<<num1<<" not Palindrome!!"<<endl;
	}

	if(isPalindrome(num2)){
		cout<<num2<<" is Palindrome!!"<<endl;
	}else{
		cout<<num2<<" not Palindrome!!"<<endl;
	}

	if(isPalindrome(num3)){
		cout<<num3<<" is Palindrome!!"<<endl;
	}else{
		cout<<num3<<" not Palindrome!!"<<endl;
	}

	if(isPalindrome(num4)){
		cout<<num4<<" is Palindrome!!"<<endl;
	}else{
		cout<<num4<<" not Palindrome!!"<<endl;
	}

	if(isPalindrome(num5)){
		cout<<num5<<" is Palindrome!!"<<endl;
	}else{
		cout<<num5<<" not Palindrome!!"<<endl;
	}

	return 0;
}
