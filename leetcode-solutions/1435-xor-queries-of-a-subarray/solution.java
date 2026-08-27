class Solution {
    public int[] xorQueries(int[] arr, int[][] queries) {
        int n=queries.length;
        int[] ans=new int[n];
        for(int i=1;i<arr.length;i++){
            arr[i]=arr[i]^arr[i-1];
        }
        for(int i=0;i<n;i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if(left==0)ans[i]=arr[right];
            else ans[i]=arr[right]^arr[left-1];
        }
        return ans;
    }
}
