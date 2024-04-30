## question description
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.

## summarization 
Simply speaking, we want the length of the last word in a sentence. If we use python, we can simply split this stence and count the length of the last piece. But we use C++, so we need to tranverse the whole string and keep record of length of all the words and return the last length. <b>we need to pay extra attention to spaces.</b>

## solution
```
class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum;
        vector<int> lengths;
        sum = 0;
        for(int i=0;i<=s.length();i++){
            if(isspace(s[i])||i==s.length()){
                if(sum!=0){
                    lengths.push_back(sum);
                    sum = 0;
                }
            }else{
                sum += 1;
            }
        }
        return lengths.back();
    }
};
```