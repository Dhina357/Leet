class Solution {
    public void gameOfLife(int[][] board) {
           int r=board.length;
           int c=board[0].length;
           int[][] directions={
{-1,-1},{-1,0},{-1,1},
{0,-1},        {0,1},
{1,-1},{1,0},{1,1}
           };
           for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int count=0;
                for(int[]dr:directions){
                    int a=i+dr[0];
                    int b=j+dr[1];
                    if(a>=0&&a<r&&b>=0&&b<c){
                        if(board[a][b]==1||board[a][b]==2){
                            count++;
                        }
                    }
                }
                if(board[i][j]==1){
                    if(count<2||count>3)board[i][j]=2;
                     }
                     else if(count==3){
                        board[i][j]=3;
                     }
            }
           }
           for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==2)board[i][j]=0;
                if(board[i][j]==3)board[i][j]=1;
            }
           }
        
    }
}
