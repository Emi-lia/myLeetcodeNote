## question description
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
## summarization
The ASCII code of "a" is 97 and the ASCII code of "A" is 65. We can change an upper case in to a lower case by adding 32. The real problem here is to determine whether an item is upper case. We use ASCII code again: the ASCII codes of upper cases are between "A" and "Z".
## solution
```
class Solution {
public:
    string toLowerCase(string s) {
        int length;
        length = s.length();
        int i;
        i = 0;
        while(i<length){
            if(s[i]>='A'&&s[i]<='Z'){
               s[i]+=32;
            }
            i++;
        }
        return s;
    }
};
```