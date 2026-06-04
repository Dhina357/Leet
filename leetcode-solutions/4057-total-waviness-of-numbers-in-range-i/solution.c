int solve(int num1,int num2){
    int waviness=0;
     for(int i=num1;i<=num2;i++){
           int n=i;
             if (n < 100) continue; 
           int count=0;

           int back=n%10;
           n/=10;
           int mid=n%10;
           n/=10;
            while(n!=0){
                int d=n%10;
                if(((d>mid)&&(mid<back))||((d<mid)&&(mid>back)))count++;
                n/=10;
                back=mid;
                mid=d;
            }
            waviness+=count;
        }
        return waviness;
}
int totalWaviness(int num1, int num2) {
    return solve(num1,num2);
}
