/*

翻转字符串

Reverse the string

Example: str = "hello world" , return "world hello"

*/


#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#define MAX_LEN 1024

char *reverse(char string[]);

int main(int argc,char **argv)
{
	char str[MAX_LEN] = "Hello my LeetCoding Repository!!";
	char *ans;
	ans = reverse(str);

	return 0;
}

char *reverse(char string[])
{
	int num = 0, i = 0;
	char *s;
	char ret[MAX_LEN] = {};
	char *S[MAX_LEN] = {};
	const char *delim = " ";	//分隔符为空格" "
	s = strtok(string, delim);	//使用strtok分割函数
	
	while(s != NULL){
		S[num]=(char *)malloc(MAX_LEN);
		memset(S[num], 0x00, MAX_LEN);
		memcpy(S[num], s, MAX_LEN);
		s = strtok(NULL, delim);
		num++;
	}

	for(i = num; i > 0; i--){
		cout<<S[i-1];
		cout<<" ";
		strcat(ret, S[i-1]);
		strcat(ret, " ");
		free(S[i]);
	}
		cout<<endl;
		free(S[0]);
		free(S[num]);
		free(S[num + 1]);
		
		cout<<ret<<endl;
		return ret;
}
