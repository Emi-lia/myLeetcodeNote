## queation description
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
## summarization
This queation is quite alike to queation 389, we need to take good advantage of ASCII code.</br> 
However we can not tell whether string s is an anagram of string s by add and comparing their ASCII codes. Such as: s='bb', t='ac', the letters are different but sum of their ASCII codes are the same.
## solution
We build a list to keep record of the two string's letters. For example, if letter 'a' appeared twice in string s we write down 2 for 'a', and if 'a' appeared three times in string t we write down 3 for 'a', 3-2!=0. According to this we can tell that string s is not an anagram of t, because t has one more 'a' than s. And of cource we need to use such method to check every letter in string s and string t.
```
class Solution {
public:
    bool isAnagram(string s, string t) {
        int item[26]={0};
        int lens = s.length();
        int lent = t.length();
        if(lens!=lent){
            return false;
        }else{
            for(int i=0;i<lens;i++){
                item[s.at(i)-'a']++;
                item[t.at(i)-'a']--;
            }
            for(int check=0;check<26;check++){
                if(item[check]!=0){
                    return false;
                }
            }
        }
        return true;
    }
};
```