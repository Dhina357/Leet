class Solution {
    public int[][] updateMatrix(int[][] mat) {
        int n=mat.length;
        int m=mat[0].length;
        Queue<Pair<Integer,Integer>>q=new LinkedList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.offer(new Pair(i,j));
                }else mat[i][j]=-1;
            }
        }
        int[][] dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.isEmpty()){
            int r=q.peek().getKey();
            int c=q.peek().getValue();
            q.poll();
            
            for(int[] d:dir){
                int nr=r+d[0];
                int nc=c+d[1];

                if(nr<n&&nr>=0&&nc<m&&nc>=0&&mat[nr][nc]==-1){
                    mat[nr][nc]=mat[r][c]+1;
                    q.offer(new Pair(nr,nc));
                }
            }

            
        }
        return mat;
    }
}
