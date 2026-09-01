class Solution {
    public int findMaxLength(int[] nums) {
        Map<Integer,Integer>freq=new HashMap<>();
        int sum=0;
        int dis=0;
        freq.put(0,-1);
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0)nums[i]=-1;
            sum+=nums[i];
           
            if(freq.containsKey(sum)){
                dis=Math.max(dis,i-freq.get(sum));
            }
            else freq.put(sum,i);
        }
        return dis;
    }
}
