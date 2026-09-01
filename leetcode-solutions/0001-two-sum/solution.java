class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>need=new HashMap<>();
        int[] ans=new int[2];
        ans[0]=-1;
        ans[1]=-1;
        for(int i=0;i<nums.length;i++){
            if(need.containsKey(target-nums[i])){
               ans[0]=need.get(target-nums[i]);
               ans[1]=i;
                break;
            }
            need.put(nums[i],i);
        }
        return ans;
        
    }
}
