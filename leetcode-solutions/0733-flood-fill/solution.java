class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int n=image.length;
        int m=image[0].length;
        int start=image[sr][sc];
         if(color==start) return image;
        Queue<Pair<Integer,Integer>>q=new LinkedList<>();
       
         image[sr][sc] = color; 
        q.offer(new Pair(sr,sc));
        while(!q.isEmpty()){
            int i=q.peek().getKey();
            int j=q.peek().getValue();
            q.poll();
            if(i>=1&&image[i-1][j]==start){
                image[i-1][j]=color;
                q.offer(new Pair(i-1,j));

            }
              if(j>=1&&image[i][j-1]==start){
                image[i][j-1]=color;
                q.offer(new Pair(i,j-1));
                
            }
              if(i<n-1&&image[i+1][j]==start){
                image[i+1][j]=color;
                q.offer(new Pair(i+1,j));
                
            }
              if(j<m-1&&image[i][j+1]==start){
                image[i][j+1]=color;
                q.offer(new Pair(i,j+1));
                
            }
                    }
                    return image;
    }
}
