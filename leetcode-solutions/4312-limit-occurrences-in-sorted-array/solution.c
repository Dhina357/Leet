/**
 * Note: The returned array must be malloced, assume caller calls free().
  */
  int* result(int* nums, int numsSize, int k, int* returnSize){
    int* ans=(int*)malloc(numsSize*sizeof(int));
    int count=0;
    int freq=0;
    for(int i=0;i<numsSize;i++){
        if(i==0||nums[i]!=nums[i-1]){
            ans[count++]=nums[i];
            freq=1;
        }
        else if(freq<k){
            ans[count++]=nums[i];
            freq++;
        }
    }
    *returnSize=count;
    return ans;
  }
  int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {
   
       return result(nums,numsSize,k,returnSize);
  }
