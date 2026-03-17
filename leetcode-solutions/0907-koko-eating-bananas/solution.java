class Solution {
    boolean check(int[] piles,int h,int k){
        long hours=0;
        for(int p:piles){
            hours+=(p+k-1)/k;
        }
        return hours<=h;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high=0;
        for(int p:piles){
            high=Math.max(high,p);
        }
        int mid;
        int ans=-1;
        while(low<=high){
              mid=low+(high-low)/2;
              if(check(piles,h,mid)){
                ans=mid;
                mid=high=mid-1;
              }
              else{
                low=mid+1;
              }
        }
        return ans;
    }
}
