class Solution {
public:
    long long sumAndMultiply(int n) {
       
       
        long long sum=0;
        long long num=0;
        long long rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n/=10;
        }
        while(rev>0){
            
            sum+=rev%10;
            if(rev%10!=0){
                num =num*10+rev%10;
            }
            rev/=10;
        }
        return num*sum;
    }
};
