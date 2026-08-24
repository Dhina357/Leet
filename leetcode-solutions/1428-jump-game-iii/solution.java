class Solution {
    public boolean dfs(int[] arr,int start,boolean[] visit){
        if(start<0||start>=arr.length||visit[start])return false;
        if(arr[start]==0)return true;
        visit[start]=true;
      boolean found= dfs(arr,start+arr[start],visit)|| dfs(arr,start-arr[start],visit);
        visit[start]=false;
        return found;
    }
    public boolean canReach(int[] arr, int start) {
        int n=arr.length;
        boolean[] visit=new boolean[n];
        return dfs(arr,start,visit);
    }
}
