class Solution {
    public int minCost(int[] nums1, int[] nums2) {
        Map<Integer,Integer>m=new HashMap<>();
        for(int num:nums1){
            m.put(num,m.getOrDefault(num,0)+1);
        }
        for(int num:nums2){
            m.put(num,m.getOrDefault(num,0)-1);
        }
        int count=0;
       for(int v:m.values()){
           if(v%2!=0)
               return -1;
      count+=Math.abs(v)/2;
       }
        
        return count/2;
        
    }
}
