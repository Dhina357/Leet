class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer>s=new HashSet<>();
        int longn=0;
        for(int a:nums){
            s.add(a);
        }
        for(int a:s){
            int curr=a;
            int count=1;
            if(!s.contains(a-1)){
                  while(s.contains(curr+1)){
                    curr++;
                    count++;
                  }
                  longn=Math.max(longn,count);
            }
        
        }
        return longn;

    }
}
