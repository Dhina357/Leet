class Solution {
    boolean check(int k,int v,int l,int r){
        if(l<=v){
            return  ((l<=k)&&(k<v));
        }
        return !((v<k)&&(k<=r));
         
    }
    public int search(int[] nums, int target) {
        int n=nums.length;
        int low=0,high=n-1;
        int ans=-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target==nums[mid])return mid;
            if(check(target,nums[mid],nums[low],nums[high])){
               
                high=mid-1;
}
else{
    low=mid+1;
}


        }
        return ans;
        
    }
}
