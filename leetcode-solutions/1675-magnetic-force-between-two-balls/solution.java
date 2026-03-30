class Solution {
    boolean check(int[]position ,int m,int k){
        
        int count=1; 
        int l=position[0];
        for(int p=1;p<position.length;p++){
            if(position[p]-l>=k){
                count++;
                l=position[p];
            }
            if(count ==m)return true;
        }
        return false;
    }
    public int maxDistance(int[] position, int m) {
        Arrays.sort(position);
        int n=position.length;
        int low =1;
        int high=position[n-1]-position[0];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(position,m,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
}
