class Solution {
public:
    int reverse(int x) {
        int n=0;
       
       
        while(x!=0){
           int d=x%10;
           x=x/10;
           if(n>INT_MAX/10||(n==INT_MAX/10&&d>7))return 0;
           if(n<INT_MIN/10||(n==INT_MIN/10&&d<-8))return 0;
              n=n*10+d;
        }
     
        return n;
        
    }
};
