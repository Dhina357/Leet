int max(int x,int y){
    return x>y?x:y;
}
bool result(int* nums, int numsSize){
     int maxR=0;
    for(int i=0;i<numsSize;i++){
        if(i>maxR)return false;
        maxR=max(maxR,i+nums[i]);
    }
    return true;
}
bool canJump(int* nums, int numsSize) {
   return result(nums,numsSize);
}
