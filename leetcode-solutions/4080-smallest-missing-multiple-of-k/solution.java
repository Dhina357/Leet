class Solution {
    public int missingMultiple(int[] nums, int k) {
        
        Map<Integer,Integer>freq=new HashMap<>();
        for(int a: nums){
            freq.put(a,freq.getOrDefault(a,0)+1);
        }
        int i=1;
        while(k<=200){
            if(!freq.containsKey(k*i)){
               break;
               
            }
            i++;
        }
        return k*i;
    }
}
