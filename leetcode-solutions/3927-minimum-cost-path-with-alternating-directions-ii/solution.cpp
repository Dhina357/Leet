class Solution {
public:
         vector<int>dx={0,1};
         vector<int>dy={1,0};
         // Changed from 3D vector to 2D vector
         vector<vector<long long>>dp;
         
         // Kept the exact same parameters and structure
         long long check(int i,int j,vector<vector<int>>& waitCost,int sec,int m,int n){
            if(i==m-1&&j==n-1)return 0;
            
            // Replaced dp[i][j][sec] with dp[i][j]
            if(dp[i][j]!=0)return  dp[i][j];
            
            long long ans=LLONG_MAX;
            if(sec==0){
              long long entry;
               for(int k=0;k<2;k++){
                int nrow=i+dx[k];
                int ncol=j+dy[k];
                 if(nrow<m && ncol<n){
                     entry=1ll*(nrow+1)*(ncol+1);
                     ans=min(ans,entry+check(nrow,ncol,waitCost,1,m,n));
                 }}
              
            }else{
                 ans=min(ans,waitCost[i][j]+check(i,j,waitCost,0,m,n));
            }
           
           // Stores the calculated answer into the 2D DP matrix
           return  dp[i][j]=ans;
         }
         
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        // Initialized as a 2D matrix of size m x n filled with 0
        dp.assign(m,vector<long long>(n,0));
        int sec=0;
     return  1+check(0,0,waitCost,sec,m,n);
    }
};
