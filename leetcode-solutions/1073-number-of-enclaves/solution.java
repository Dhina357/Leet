class Solution {

    public int numEnclaves(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        Queue<int[]>q=new LinkedList<>();
        int land=0;
        boolean[][] visit=new boolean[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    land++;
                    visit[i][j]=true;
               if((i==0||j==0||i==n-1||j==m-1)){
               q.offer(new int[]{i,j});
                visit[i][j]=false;}
               }
            }
        }
        int[] dx={0,1,0,-1};
        int[] dy={1,0,-1,0};
        while(!q.isEmpty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int[] cell=q.poll();
               land--;
                for(int j=0;j<4;j++){
                    int r=cell[0]+dx[j];
                    int c=cell[1]+dy[j];
                    if(r>=0&&r<n&&c<m&&c>=0&&visit[r][c]){
                      q.offer(new int[]{r,c});
                        visit[r][c]=false;
                    }
                }
            }
            if(land<=0)return 0;
            
        }
        return land;
        
    }
}
