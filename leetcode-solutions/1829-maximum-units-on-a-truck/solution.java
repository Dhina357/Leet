class Solution {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes,(a,b)->Integer.compare(b[1],a[1]));
        int boxes=truckSize;
        int result=0;
        for(int[] a:boxTypes){
            if(boxes==0)break;
           if(a[0]<=boxes){
            boxes-=a[0];
            result+=(a[0]*a[1]);
           }
           else{
            
            result+=(boxes*a[1]);
             boxes=0;
           }
        }
        return result;
        
    }
}
