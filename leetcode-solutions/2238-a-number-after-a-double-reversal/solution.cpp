class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n=num ,rev;

        while(num!=0){
            int d=num%10;
            rev=rev*10+d;
            num=num/10;
        }
        
         while(rev!=0){
            int d=rev%10;
            num=num*10+d;
            rev=rev/10;
        }
        if(n==num)return true;
        return false;
    }
};
