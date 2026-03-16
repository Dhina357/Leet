class Solution {
    double pow(double a,int b){
       long N=b;
        double ans=1;
        if(N<0){
            a=1/a;
            N=-N;
        }
        
        while(N>0){
            if((N&1)==1)ans=ans*a;
            a*=a;
            N>>=1;
        }
        
        return ans;
    }
    public double myPow(double x, int n) {
        return pow(x,n);
    }
}
