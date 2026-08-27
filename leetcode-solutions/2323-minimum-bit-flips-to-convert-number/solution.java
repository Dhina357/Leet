class Solution {
    public int minBitFlips(int start, int goal) {
        int ans=0;
        int diff=start^goal;
        while(diff>0){
            int lm=diff & -diff;
            ans++;
            diff-=lm;
        }
        return ans;
    }
}
