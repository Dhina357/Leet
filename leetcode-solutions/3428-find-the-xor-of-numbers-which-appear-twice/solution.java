class Solution {
    public int duplicateNumbersXOR(int[] nums) {
        Arrays.sort(nums);
        int index=0;
        int n=nums.length;
        int xor=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                if(xor!=-1)xor^=nums[i];
                else xor=nums[i];
                i++;
            }
        }
        return xor==-1?0:xor;
    }
}
