class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
       
        int m=grid.length;
        int n=grid[0].length;
         int total =m*n;
        k=k%total;
       List<List<Integer>>ans=new ArrayList<>();
       for(int i=0;i<m;i++){
        List<Integer> r=new ArrayList<>();
        for(int j=0;j<n;j++){
            r.add(0);
        }
        ans.add(r);
       }
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          int curr=i*n+j;
          int next = (curr+k)%total;
          int row= next/n;
          int col=next%n;
          ans.get(row).set(col,grid[i][j]);
        }
       }
return ans;
    }
}
