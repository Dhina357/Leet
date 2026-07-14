class Solution {
    public boolean check(int[] quantities,int n,int k){
        int count=0;
        for(int a:quantities){
            count+=(a+k-1)/k;
        }
return count<=n;
    }
    public int minimizedMaximum(int n, int[] quantities) {
        int low=1,ans=0;
        int high=quantities[0];
    for(int a:quantities){
        if(a>high)high=a;
    }
    while(low<=high){
       int mid=low+(high-low)/2;
       if(check(quantities,n,mid)){
        ans=mid;
        high=mid-1;
       }
       else low=mid+1;
    }
    return ans;
    }
}
