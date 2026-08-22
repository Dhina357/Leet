class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->Integer.compare(a[1],b[1]));
        int n=intervals.length;
        if(n<2)return 0;
        int back=intervals[0][1];
        int count=0;
        for(int i=1;i<n;i++){
     if(intervals[i][0]<back){
        count++;
     }
     else back=intervals[i][1];
        }
        return count;
    }
}
