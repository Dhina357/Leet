class Solution {
    public int subarraySum(int[] nums, int k) {
      int prefixSum=0;
        HashMap<Integer,Integer>hm=new HashMap<>();
        hm.put(0,1);
        int count=0;
        for(int a:nums){
            prefixSum+=a;
          
            if(hm.containsKey(prefixSum-k))
            count+=hm.get(prefixSum-k);
            hm.put(prefixSum,hm.getOrDefault(prefixSum,0)+1);
        }

return count;
    }
}
