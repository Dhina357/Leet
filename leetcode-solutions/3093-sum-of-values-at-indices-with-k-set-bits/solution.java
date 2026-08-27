class Solution {
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int n=nums.size();
        int result=0;
        for(int i=0;i<n;i++){
            int a=i;
            int count=0;
            while(a>0){
                if((a&1)==1)count++;
               a= a>>1;

            }
            if(count==k)result+=nums.get(i);
        }
        return result;
        
    }
}
