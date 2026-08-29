class Solution {
    public int consecutiveNumbersSum(int n) {
        int ans=0;
       
        for(int x=1;x*x<2L*n;x++){
            if(((2L*n)%x)!=0)continue;
          long  val=(2L*n)/x;
         if((val-x+1)%2==0)ans++;}
         return ans;
    }
}


