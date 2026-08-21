class Solution {
    public int orangesRotting(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
     Queue<Pair<Integer,Integer>>q=new LinkedList<>();
     int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.offer(new Pair(i,j));
                }
                else if(grid[i][j]==1)fresh++;
            }
        }
         if(fresh==0)return 0;
       
        int ans=0;
        
        while(!q.isEmpty()){
            boolean current=false;
             int size=q.size();
            
             for(int p=0;p<size;p++){
            int i=q.peek().getKey();
            int j=q.peek().getValue();
           q.poll();
            
            
             if(i>=1&&grid[i-1][j]==1){
                grid[i-1][j]=2;
                q.offer(new Pair(i-1,j));
                current=true;
                fresh--;

            }
              if(j>=1&&grid[i][j-1]==1){
                grid[i][j-1]=2;
                q.offer(new Pair(i,j-1));
                current =true;
                fresh--;
                
            }
              if(i<n-1&&grid[i+1][j]==1){
                grid[i+1][j]=2;
                q.offer(new Pair(i+1,j));
                current =true;
                fresh--;
            }
              if(j<m-1&&grid[i][j+1]==1){
                grid[i][j+1]=2;
                q.offer(new Pair(i,j+1));
                current =true;
                fresh--;
            }
            }
            if(current)ans++;
        }
       
       
        return fresh!=0?-1:ans;
    }
}
