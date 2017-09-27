
/* LeetCode 第13题 Roman to Int */


#include <iostream>

using namespace std;

int romanToInt(string s);
int toInt(char ch);


int main(int argc,char **argv)
{
	string str = "MCMXCVI";
	cout<<"Answer is: ["<<romanToInt(str)<<"]"<<endl;

	return 0;
}

int romanToInt(string s) {
    int iRet = toInt(s[0]);
    for(int i = 1; i < s.length(); i++){
        if(toInt(s[i-1]) < toInt(s[i])){
            iRet += toInt(s[i]) - 2*toInt(s[i-1]);
        }else{
            iRet += toInt(s[i]);
        }
    }
    return iRet;
}

int toInt(char ch){
    switch(ch){
 	    case 'I': return 1;
   	    case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;
    }
}


