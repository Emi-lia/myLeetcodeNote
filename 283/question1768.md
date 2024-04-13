## queation description:
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
## summarization
In my opinion, this question mainly trains the ability of using loops and conditions. 
* It is obvious that single loop would be enough.
* We can use string.length() to get a string's size.
* We can use string.at(i) to get a string's ith character. 
## solution
This quite a simple question, my code is as below:
```
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergeString = "";
        int i = 0;
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()){
                mergeString += word1.at(i);
            }                
            if(i<word2.length()){
                mergeString += word2.at(i);
            }
            i++;
        }
        return mergeString;
    }
};
```