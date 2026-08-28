class Solution {
    public int[] singleNumber(int[] nums) {
        int xr=0;
        for(int a:nums){
            xr=xr^a;
        }
        int l=xr&-xr;
        int ga=0;
        int gb=0;
        for(int a:nums){
           if((l&a)==0)ga=ga^a;
           else gb=gb^a;
        }
        int[] ans=new int[2];
        ans[0]=ga;
        ans[1]=gb;
        return ans;
    }
}
