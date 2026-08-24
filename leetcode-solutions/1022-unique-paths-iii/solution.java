class Solution {
    int n,m;
    int[] dy={1,0,-1,0};
    int[] dx={0,1,0,-1};
    int result=0;int total;
    int er,ec;
    public void dfs(int r,int c,int[][] grid,boolean[][] visit,int idx){
       
        if(r<0||r>=n||c<0||c>=m||visit[r][c])return ;
         if(idx==total&&r==er&&c==ec) {
            result++;
        return ;
        }
        visit[r][c]=true;
        for(int i=0;i<4;i++){
            dfs(r+dx[i],c+dy[i],grid,visit,idx+1);
        }
        visit[r][c]=false;
        
    }
    public int uniquePathsIII(int[][] grid) {
     n=grid.length;
     m=grid[0].length;
     boolean[][] visit=new boolean[n][m];
   total=n*m-1;
     int sr=-1,sc=-1;
     er=-1;ec=-1;

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                sr=i;sc=j;
            }
            if(grid[i][j]==2){
                er=i;ec=j;
            }
            if(grid[i][j]==-1){visit[i][j]=true;
            total--;
            }
        }
     }
     dfs(sr,sc,grid,visit,0);
     return result;

        
    }
}
