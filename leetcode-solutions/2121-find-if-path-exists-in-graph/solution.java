class Solution {
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        if(source==destination)return true;
        List<Integer>[] graph =new ArrayList[n];
        for(int i=0;i<n;i++){
            graph[i]=new ArrayList<>();
        }
        for(int[] edge:edges){
            int u=edge[0];
            int v=edge[1];
            graph[u].add(v);
            graph[v].add(u);
        }
        Queue<Integer>q=new LinkedList<>();
    boolean[] ans=new boolean[n];
    q.offer(source);
    ans[source]=true;
        while(!q.isEmpty()){
           int curr=q.poll();
           if(curr==destination)return true;
            for(int arr:graph[curr]){
                  if(!ans[arr]==true){
                    ans[arr]=true;
                  q.offer(arr);}
            }
        }
return false;
    }
}
