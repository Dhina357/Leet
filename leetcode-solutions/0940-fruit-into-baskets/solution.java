class Solution {
    public int totalFruit(int[] fruits) {
        int max=0;
        int n=fruits.length;
        if(n==1)return 1;
        int a=0,b=1;
         while (b < n && fruits[b] == fruits[a]) {
            b++;
        }
        if (b == n) return n; 
        int aa = b; 
        int bb = 1; 
        int count=b+1;
        int l=0;
        max = count;
        for(int r=b+1;r<n;r++){
                  while(fruits[r]!=fruits[a]&&fruits[r]!=fruits[b]){
                    
                      
                        
                         if(fruits[l]==fruits[a])aa--;
                         else bb--;
                         l++;
                            count--;
                          if(aa==0||bb==0)break;
                        
                  }
                  if(aa==0){
                    aa=1;
                    a=r;
                  }
                  else if(bb==0){
                      bb=1;
                      b=r;
                  }
                  else if(fruits[a]==fruits[r]){
                    aa++;
                    
                  }
                  else {
                    bb++;
                    
                  }
                 
               count++;
                  if(max<count)max=count;
        }
        return max;
    }
}
