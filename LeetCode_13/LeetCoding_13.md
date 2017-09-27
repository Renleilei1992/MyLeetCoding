### LeetCode 第十三题 Roman to Integer
 - Given a roman numeral, convert it to an integer.
 - Input is guaranteed to be within the range from 1 to 3999.
 - 解法：
    ```
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
    ```
