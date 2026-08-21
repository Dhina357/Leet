class Solution {
    public int countDigitOne(int n) {
        int ans=0;
        for(int factor=1;factor<=n;factor*=10){
            int x=(n%factor);
            int y=(n/factor)%10;
            int z=(n/(factor*10));
            if(y==0)ans+=z*factor;
            else if(y==1)ans+=z*factor+x+1;
            else ans+=z*factor+factor;
        }
        return ans;
    }
}
