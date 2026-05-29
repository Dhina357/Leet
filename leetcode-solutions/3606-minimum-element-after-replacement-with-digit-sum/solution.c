int min(int x,int y){
    return x<y?x:y;
}
int result(int* nums, int numsSize){
    int minE=INT_MAX;
    for(int i=0;i<numsSize;i++){
        int a=nums[i];
        int n=0;
        while(a!=0){
           int d=a%10;
           n+=d;
           a=a/10;
        }
        minE=min(minE,n);
    }
    return minE;
}

int minElement(int* nums, int numsSize) {
    return result(nums,numsSize);
}
