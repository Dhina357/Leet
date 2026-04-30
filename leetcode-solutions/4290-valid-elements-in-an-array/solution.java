class Solution {
    public List<Integer> findValidElements(int[] nums) {
        int n=nums.length;
        List<Integer>a=new ArrayList<>();
        int[] rightMax =new int[n];
        rightMax[n-1]=Integer.MIN_VALUE;
        int leftMax=Integer.MIN_VALUE;
        for(int i=n-2;i>=0;i--){
            rightMax[i]=Math.max(rightMax[i+1],nums[i+1]);
        }
        for(int i=0;i<n;i++){
            if(leftMax<nums[i]||nums[i]>rightMax[i])
            a.add(nums[i]);
            leftMax=Math.max(leftMax, nums[i]);
        }
        return a;
    }
}
