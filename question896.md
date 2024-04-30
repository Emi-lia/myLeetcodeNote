## question description
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

## summarization
Step1: check wether nums[1]>nums[0] and keep a record.
step2: check wether nums[i+1]>nums[i] and compare it with the record, if it is not the same, break and return false, else, return ture.
But we may encounter an array such as [1,1,2,3]. Then the record need to be nums[2]-nums[1].
It is also possible that the array is [2,2,2,2,2]. Then we can simply return ture without check.
 
## solution
```
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int diff=0;
        int j=0;
        while(j<nums.size()-1){
            if(nums[j+1]-nums[j]!=0){
                diff = nums[j+1]-nums[j]>=0?1:-1;
                break;
            }
            j++;
        }
        if(diff!=0){
            for(int i=0;i<nums.size()-1;i++){
                if((nums[i+1]-nums[i])/diff<0){
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};
```