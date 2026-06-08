/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
  int* result =(int*)malloc(numsSize*sizeof(int));
*returnSize=numsSize;
int index=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot)result[index++]=nums[i];
      
    }
       for(int i=0;i<numsSize;i++){
        if(nums[i]==pivot)result[index++]=nums[i];
      
    }
       for(int i=0;i<numsSize;i++){
        if(nums[i]>pivot)result[index++]=nums[i];
      
    }
    return result;

}
