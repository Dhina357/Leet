class Solution {
    public int minAbsoluteDifference(int[] nums) {
        int one=-1;
        int two=-1;
        int min=Integer.MAX_VALUE;
       for(int i=0;i<nums.length;i++){
        if(nums[i]==1)one=i;
        if(nums[i]==2)two=i;
        if((one!=-1)&&(two!=-1)){ 
            int ans=Math.abs(one-two);
            min=Math.min(ans,min);
        }

       }
       return min!=Integer.MAX_VALUE?min:-1;
        
    }
}
