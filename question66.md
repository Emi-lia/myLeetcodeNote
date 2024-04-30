## question description
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.


## summarization
The difficulty of this problem is carry. In fact all we need to do is tell whether one digit needs carry, if it does not, we can just add one to the current digit; if it does, we should make the current digit 0 and add one to the former digit.</br>
Be aware that we can insert a number to array using:
```
digits.insert(digits.begin(),1);
```
The first item is location of insertion the second item is value for insertion. digits.begin() means insert at the begining of digits array, digits.begin()+1 means insert as the second number.

## solution
```
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size()-1;
        for(int i=length;i>=0;i--){
            if(digits[i]!=9){
                digits[i]++;
                break;
            }else{
                digits[i]=0;
                if(i-1<0){
                    digits.insert(digits.begin(),1);
                }
            }
        }
        return digits;
    }
};
```
