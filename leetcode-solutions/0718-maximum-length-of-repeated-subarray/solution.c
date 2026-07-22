int findLength(int* nums1, int nums1Size, int* nums2, int nums2Size) {
     int n=nums1Size;
        int m=nums2Size;
        int dp[n+1][m+1];
        int max=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)dp[i][j]=0;
                else if( nums1[i-1]==nums2[j-1])dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j] = 0;
                if(dp[i][j]>max)max=dp[i][j];
            }

        }
        
        return max;
}
