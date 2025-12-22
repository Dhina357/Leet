class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
       long long a=0;
        int b=x;
       while(x>0){
        int d=x%10;
        a=a*10+d;
        x=x/10;
       }
        if(a==b){
            return true;
        }
        return false;
    }
};
