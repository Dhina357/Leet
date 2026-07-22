char* longestPalindrome(char* s) {
     int n=strlen(s);
     
    int dp[n][n];
    int max=0;
   
int start =0;
    for(int i=0;i<n;i++){
        for(int k=0,j=i;k<n-i;k++,j++){
            if(k==j){dp[k][j]=1;}
            else if(i==1) {if(s[k]==s[j])dp[k][j]=2;
            else dp[k][j]=0;}
            else if(s[k]==s[j]&&dp[k+1][j-1]) dp[k][j]=2+dp[k+1][j-1];
            else dp[k][j]=0;
            if(j-k+1>max&&dp[k][j]){
                  max=j-k+1;
                  start=k;
            }
        }
       
    }
     char* ans=(char*)malloc((max+1)*sizeof(char));
        strncpy(ans,s+start,max);
        ans[max]='\0';
        return ans;
}
