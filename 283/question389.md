## question description
You are given two strings s and t.String t is generated by random shuffling string s and then add one more letter at a random position.Return the letter that was added to t.
* Be aware that string s is shuffled, so we might encouter such a case : s='abjt',t='tbjay'
* Be aware that the added letter is posible to be the same as letters in s. 
* Be aware that the letter is added at random position.
## summarization
I think this is mainly about ASCII code.
## solution
There are two thoughts:
* Adding all ASCII codes of the letters in string t and string s. The discrepancy between the two Added ASCII codes is ASCII code of the added letter.
```
class Solution {
public:
    char findTheDifference(string s, string t) {
        int numbers = 0,numbert = 0;
        int lens = s.length(), lent = t.length();
        for(int i=0;i<lens;i++){
            numbers += s.at(i)-'0';
        }
        for(int j=0;j<lent;j++){
            numbert += t.at(j)-'0';
        }
        return (numbert-numbers)+'0';
    }
};
```
* build a array to record every item in string t, and delete every array in string s from this map, the left one is the added letter we need. The best way to acheive this is using ASCII code(we can always add and subtract numbers to find the difference).
```
class Solution {
public:
    char findTheDifference(string s, string t) {
        int checkmap[26]={0};
        int result;
        for(int i=0;i<t.length();i++){
            checkmap[t.at(i)-'a']++;
        }
        for(int j=0;j<s.length();j++){
            checkmap[s.at(j)-'a']--;
        }
        for(int k=0;k<26;k++){
            if(checkmap[k]==1){
                result=k+'a';
            }
        }
        return result;
    }
};
```