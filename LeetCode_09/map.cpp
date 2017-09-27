


#include <iostream>
#include <map>

using namespace std;

int isPalindrome(int x);

int main(int argc,char **argv)
{
	map<int, int> mapNum;

	mapNum[1] = 4;
	mapNum[2] = 3;
	mapNum[3] = 2;
	mapNum[4] = 1;

	cout<<mapNum[1]<<endl;
	cout<<mapNum[2]<<endl;
	cout<<mapNum[3]<<endl;
	cout<<mapNum[4]<<endl;

	isPalindrome(1234);

	return 0;
}

int isPalindrome(int x) {
    if(x < 0)
        return -1;

    int i = 1;

    map<int, int> mapNum;
    while(x){
        mapNum[i] = x%10;
		cout<<"i = ["<<i<<"] mapNum["<<i<<"] = ["<<mapNum[i]<<"]"<<endl;
        x = x/10;
        i++;
    }

    i = i - 1;
	cout<<"i = "<<i<<endl;
    for(int j = 1; j < i; j++, i--){
        if(mapNum.count(j) && mapNum.count(i)){
			cout<<"mapNum["<<i<<"] = "<<mapNum[i]<<"  mapNum["<<j<<"] = "<<mapNum[j]<<endl;
            if(mapNum[i] == mapNum[j]){
                continue;
            }else{
                return -1;
            }
        }else{
            return -1;
        }
    }
    return 0;
}

