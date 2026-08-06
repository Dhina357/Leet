class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<101;i++){
            int prod=1;
            int nn=i;
            while(nn!=0){
                prod=prod*(nn%10);
            nn=nn/10;
            }
            if(prod%t==0)return i;
        }
        return 100;
    }
};
