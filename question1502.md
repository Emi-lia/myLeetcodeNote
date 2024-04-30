## question description
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

## summarization
The question may be hard to understand. In fact, all we need to do is to tell wether an array of numbers, after sorted, is evenly decreased or increased.</br>
step1: sort the array.
step2: evenly increase or decrease means the difference between two adjoint numbers should be the same.

## solution 
```
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff;
        diff = arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]!=diff){
                return false;
                break;
            }
        }
        return true;
    }
};
```
we can also use the property of arithmetic progression to solve this question:
$$arr[i+1]+arr[i-1]==2*arr[i]$$
```
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i+1]+arr[i-1]!=2*arr[i]){
                return false;
                break;
            }
        }
        return true;
    }
};
```
