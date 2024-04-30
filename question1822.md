## queastion description
There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).

## summarization 
We can simply add all numbers in the array and tell whether it's negative, positive or 0, but this is only applicable for small numbers. When we need to deal with big numbers, product will be overflow. <br>
We can tell whether a product is negative, positive or 0 by simply counting negative numbers and zero numbers of the elements.

## solution
```
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int length = nums.size()-1;
        int i=0;
        int negativeNumber=0;
        while(i<=length){
            if(nums[i]==0){
                return 0;
                break;
            }else{
                if(nums[i]<0){
                    negativeNumber += 1;
                }
            }
            i++;
        }
        if(negativeNumber%2==0){
            return 1;
        }else{
            return -1;
        }
    }
};
```
