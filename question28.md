## question description
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
* it is possible that haystack is shorter than needle.
## summarization
* comparision of strings: 
```
string a="sjiodsf";
string b="deowdew";
if(a==b){
    return 1;
}
```
* sbstract substring
```
string a = "djoidweo";
string b = a.substr(2,4);
```

## solution

```
class Solution {
public:
    int strStr(string haystack, string needle) {
        int answerState=0,answer;
        char item1,item2;
        int lenn = needle.length();
        int lenh = haystack.length();
        if(lenn>lenh){
            answer=-1;
            }else{
            for(int i=0;i<=lenh-lenn;i++){
                for(int j=0;j<lenn;j++){
                    item1 = haystack.at(j+i);
                    item2 = needle.at(j);
                    if(item1!=item2){
                        answerState=1;
                        break;
                    }else{answerState=0;continue;}                
                }
                if(answerState==0){
                    answer=i;
                    break;
                }else{answer=-1;continue;}
            }
        }
        return answer;
    }
};
```
in for loops the outer loop is from 0 to (lenh-lenn). This is done to ensure that there are enough characters left in the haystack for the needle to fit. And the sign must be "<=lenh-lenn" because we need to check the last lenn items of haystack.</br>
There are better solution using the same idea by taking adwantage of string's attributes. Instead of comparing items in strings we can compare substrings.
```
class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenn = needle.length();
        int lenh = haystack.length();
        if(lenn>lenh){
            return -1;
        }else{
            for(int i=0;i<=haystack.length()-needle.length();i++){
                if(haystack.substr(i,needle.length())==needle){
                    return i;
                }
            }
            return -1;
        }        
    }
};
```
