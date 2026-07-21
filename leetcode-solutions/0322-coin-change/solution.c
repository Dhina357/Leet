
int coinChange(int* coins, int coinsSize, int amount) {
    int n=coinsSize;
   int dp[amount+1];
   dp[0] = 0; 
    for (int i = 1; i <= amount; i++) {
        dp[i] = amount + 1; 
    }
   for(int i=1;i<=amount;i++){
    for(int j=0;j<coinsSize;j++){
        if(i-coins[j]>=0){
            int res=dp[i-coins[j]];
            if(res!=amount+1)
            dp[i]=dp[i]<res+1?dp[i]:res+1;
        }
    }
   
   }
     return dp[amount] <= amount ? dp[amount] : -1;
}
