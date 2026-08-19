class Solution {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        List<List<Integer>>adj=new ArrayList<>();
        for(int i=0;i<numCourses;i++){
            adj.add(new ArrayList<>());
        }
        int[] indegree=new int[numCourses];
        for(int[] deg:prerequisites){
            int a=deg[0];
            int b=deg[1];
            adj.get(b).add(a);
            indegree[a]++;
        }
        int[] order =new int[numCourses];
        Queue<Integer>q=new LinkedList<>();
   
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)q.offer(i);
        }
        int idx=0;
        while(!q.isEmpty()){
            int node=q.poll();
            order[idx++]=node;
        for(int val:adj.get(node)){
            indegree[val]--;
            if(indegree[val]==0)
            q.offer(val);
        }
        } 
        if(idx==numCourses)
        return order;
        return new int[0];
    }
}
