//存在一个数组,需要在保持其他元素不变的情况下把0元素全部移到数组的最后
//[0,1,0,3,12]--->[1,3,12,0,0]
#include<vector>
#include<stdio.h>
int main(){
    int nums[5] = {0,1,0,3,12};
    int middle;
    for(int i=0;i<5;i++){
        if(nums[i]==0){
            for(int j=i;j<5;j++){
                middle = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = middle;
            }
        }
    }
    for(int i = 0;i<5;i++){
        printf("%d",nums[i]);
    }
}
