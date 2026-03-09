class Solution {
    public int smallestBalancedIndex(int[] nums) {
        long sum=0;
        for(int i=0;i<nums.length;i++){
             sum+=nums[i];
        }
        int n=nums.length;
        int result=-1;
        long prod=1;
        for(int i=n-1;i>0;i--){
           sum-=nums[i];
           if(sum==prod)
           return i;
           if(sum<prod)
           return result;
           prod*=nums[i];
        }
        return result;
    }
}
