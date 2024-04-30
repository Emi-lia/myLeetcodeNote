## question description
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
## summarization
## solution
```
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string needle="";
        string haystack="";
        int answerstate;
        for(int i=1;i<s.length()/2+1;i++){
            needle=s.substr(0,i);
            haystack=s.substr(i,s.length());
            answerstate=0;
            if(haystack.length()%needle.length()==0){
                for(int j=0;j<haystack.length();j+=needle.length()){
                    if(haystack.substr(j,needle.length())!=needle){
                        answerstate=1;
                        break;
                    }
                }
            }else{
                answerstate=1;
            }
            if(answerstate==0){
                break;
            }
        }
        return answerstate==0;
    }
};
```