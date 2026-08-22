class Solution {
    public int jump(int[] nums) {
                if (nums.length <= 1) return 0 ;
        int maxx=nums[0];
int curr=nums[0];
int result=0;

for(int i=0;i<nums.length-1;i++){
   
     maxx=Math.max(maxx,i+nums[i]);
     if(i==curr){
  result++;
        curr=maxx;
     }
}

return result + 1;     }
}
