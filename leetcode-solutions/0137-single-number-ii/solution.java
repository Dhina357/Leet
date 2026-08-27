class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer,Integer>freq=new HashMap<>();
        for(int a:nums){
           freq.put(a,freq.getOrDefault(a,0)+1);
        }
        int ans=-1;
        for(Map.Entry<Integer,Integer>entry:freq.entrySet()){
            if(entry.getValue()==1){
                ans=entry.getKey();
                break;
            }
        }
        return ans;
    }
}
