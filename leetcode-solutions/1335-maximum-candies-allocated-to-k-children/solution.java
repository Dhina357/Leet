class Solution {
       boolean check(int[] candies ,int n,long k){
        long count=0;
        for(int a:candies){
            count+=a/n;
        }
        return count>=k;
       }
    public int maximumCandies(int[] candies, long k) {
        int ans=0;
        int low=1,high=0;
        for(int a:candies){
            if(a>high)high=a;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(candies,mid,k)){
                ans=mid;
              low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
}
