bool isMatch(char* s, char* p) {
   
     int n=strlen(s);
        int m=strlen(p);
        bool dp[n+1][m+1];
       
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0&&j==0)dp[0][0]=true;
                else if(j==0)dp[i][j]=false;
                else if(i==0){
                      if(p[j-1]=='*')dp[i][j]=dp[i][j-1];
                      else dp[i][j]=false;
                }
                 else if( s[i-1]==p[j-1])dp[i][j]=dp[i-1][j-1];
                else if(p[j-1]=='*')dp[i][j]=dp[i][j-1]||dp[i-1][j];
                 else if(p[j-1]=='?')dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=false;
            }

        }
       
        
        return dp[n][m];

    
}
