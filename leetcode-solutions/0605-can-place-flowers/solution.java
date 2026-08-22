class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
int L=flowerbed.length;
        for(int i=0;i<L;i++){
            if(flowerbed[i]==0){
                boolean left=(i==0||flowerbed[i-1]==0);
                boolean right=(i==L-1||flowerbed[i+1]==0);
                if(left&&right){
                    n--;
                    flowerbed[i]=1;
                      if(n<=0)return true;
            }
                }
              
           
      
        }
       
        return n<=0;
    }
}
