class Solution {
    long gcd(long s,long e){
        if(e==0)return s;
       return gcd(e,s%e);
    }
    public long gcdSum(int[] nums) {
        long[] num =new long[nums.length];
        long ans=0,a=0;
        for(int i=0;i<nums.length;i++){
              a=Math.max(a,nums[i]);
                num[i]=gcd(nums[i],a);
 }
 int n=num.length;
 Arrays.sort(num);
 int left=0,right=n-1;
 while(left<right){
    ans+=gcd(num[left],num[right]);
    left++;
    right--;

 }
        return ans;
    }
}
