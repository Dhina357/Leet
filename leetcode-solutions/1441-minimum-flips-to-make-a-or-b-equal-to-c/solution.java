class Solution {
    public int minFlips(int a, int b, int c) {
    int ans=0;
      int diff=(a|b)^c;
while(diff>0){
int lm=diff & -diff;
      if((c & lm)==0){
       if((a&lm)!=0)ans+=1;
       if((b&lm)!=0)ans+=1;}
     else ans++;
diff-=lm;
    }return ans;
    }
}
