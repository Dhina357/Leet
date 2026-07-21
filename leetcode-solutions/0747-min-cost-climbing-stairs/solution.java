class Solution {
    public int minCostClimbingStairs(int[] cost) {
        
        int n=cost.length;
        if(n==0)return 0;
        if(n==1)return cost[0];
        if(n==2)return Math.min(cost[0],cost[1]);
        int[] ans=new int[n];
        ans[0]=cost[0];
        ans[1]=cost[1];
        for(int i=2;i<n;i++){
            ans[i]=Math.min(cost[i]+ans[i-1],cost[i]+ans[i-2]);
        }
        return Math.min(ans[n-1],ans[n-2]);
    }
}
