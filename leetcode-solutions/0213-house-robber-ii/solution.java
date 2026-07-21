class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        if(n==0)return 0;
        if(n==1)return nums[0];
        if(n==2)return Math.max(nums[0],nums[1]);
        int[] arr1=new int[n];
        arr1[0]=nums[0];
        arr1[1]=Math.max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++){
            arr1[i]=Math.max(arr1[i-1],arr1[i-2]+nums[i]);
        }
        int[] arr2=new int[n];
        arr2[1]=nums[1];
        arr2[2]=Math.max(nums[1],nums[2]);
        for(int i=3;i<n;i++){
            arr2[i]=Math.max(arr2[i-1],arr2[i-2]+nums[i]);
        }
        return Math.max(arr1[n-2],arr2[n-1]);
    }
}
