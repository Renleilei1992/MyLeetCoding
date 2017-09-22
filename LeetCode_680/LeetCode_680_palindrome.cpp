
/* 使用递归判断字符串是否是回文 */

#include <string.h>
#include <iostream>

using namespace std;

bool fun(int bef, int aft, char *str, int length)
{
	if(length == 1 || length == 0)
		return true;
	if(str[bef] != str[aft])
		return false;
	return fun(bef+1, aft-1, str, length-2);
}

int main()
{
	char str[] = "level";
	int len = strlen(str);

	cout<<"["<<str<<"].size() = "<<len<<endl;

	if(fun(0, len-1, str, len)){
		cout<<"["<<str<<"] 是回文! "<<endl;
	}else{
		cout<<"["<<str<<"] 不是回文! "<<endl;
	}
	
	return 0;
}
