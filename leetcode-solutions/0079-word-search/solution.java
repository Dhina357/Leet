class Solution {
    int n,m;
   

  boolean dfs(int r,int c,char[][] board,boolean[][] visit, String word,int idx){
   if(r<0||r>=n||c<0||c>=m||board[r][c]!=word.charAt(idx)||visit[r][c]) return false;
       if (idx == word.length() - 1) {
        return true;
    }
      visit[r][c]=true;
    boolean found= dfs(r+1,c,board,visit,word,idx+1)||
     dfs(r-1,c,board,visit,word,idx+1)|| 
     dfs(r,c+1,board,visit,word,idx+1)||
      dfs(r,c-1,board,visit,word,idx+1);
        visit[r][c]=false;
        return found;
  }
    public boolean exist(char[][] board, String word) {
       
         n=board.length;
         m=board[0].length;
       
       boolean[][] visit=new boolean[n][m];
     
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word.charAt(0)==board[i][j]){
                    
                    if(dfs(i,j,board,visit,word,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
}
