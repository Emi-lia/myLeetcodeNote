## question description
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
<b>Note that you must do this in-place without making a copy of the array.</b>
For example: 0,1,0,3,12 will be 1,3,12,0,0

## summarization
* thought 1: the most naive thought would be exchange 0 elements with other elements one by one. 
* thought 2: but all we need to do is to exchange 0 elements with non-elements one by one.

## solution
* solution 1:
```
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size()-1;
        int i=0;
        while(i<length){
            while(nums[i]==0&&length>0){
                int middle;
                for(int j=i;j<nums.size()-1;j++){
                    middle = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=middle;
                }
                length--;
            }
            i++;
        }
    }
};
```
j+1 appeared, so the left edge can only be nums.size()-1. There could be a change we stuck in [1,3,12,0,0] and exchange 0 with 0, the loop will never end, so after each round of exchange we have to make length decrease by 1. There could be a chance that the array is [0,0], so we need to make sure it never enters the loop by add a condition length>0.
* solution 2:
```
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int i=0,j=0;
        while(j<length){
            if(nums[j]!=0){
                int middle;
                middle = nums[j];
                nums[j] = nums[i];
                nums[i] = middle;
                i++;
            }
            j++;
        }
       
    }
};
```
this is a much better way, we only need to exchange 0 elements with non-zero elements. 