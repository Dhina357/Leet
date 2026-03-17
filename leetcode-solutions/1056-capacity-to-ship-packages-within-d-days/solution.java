class Solution {
    boolean check(int[] weights,int d,int k){
        long days=1;
        long sum=0;
        for(int w:weights){
          sum+=w;
          if(sum>k){
            sum=w;
            days++;
          }
        }
        return days<=d;
    }
    public int shipWithinDays(int[] weights, int days) {
       
        int high=0;
        int sum=0;
        for(int w:weights){
            high=Math.max(high,w);
            sum+=w;
        }
         int low =high;
         high=sum;
        int ans=-1;
        int mid;
        while(low<=high){
           mid=low+(high-low)/2;
           if(check(weights,days,mid)){
            ans=mid;
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
        return ans;
        
    }
}
