int min(int a,int b){
    return a>b?b:a;
}
    int minDistance(char* word1, char* word2) {
    int n=strlen(word1);
        int m=strlen(word2);
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0)dp[i][j]=j;
                else if(j==0)dp[i][j]=i;
                else if( word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1];
                else dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            }
        }
        return dp[n][m] ;
}
