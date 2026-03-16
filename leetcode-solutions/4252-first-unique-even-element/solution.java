class Solution {
    public int firstUniqueEven(int[] nums) {
        int ans=-1;
        Map<Integer,Integer>m=new HashMap<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            m.put(nums[i],m.getOrDefault(nums[i],0)+1);
        }
        for(int num:nums){
            if((num%2==0)&&m.get(num)==1){
                return num;
            }
        }
        return -1;
    }
}
