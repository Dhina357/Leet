class Solution {
public:
int index=0;
int count=0;
int maxx=0;
   bool rec(vector<int>&nums,int n,int i){
    
     if(i>index)return false;
    if(index>=n-1)return true;
     if(index<i+nums[i]){
        maxx=max(maxx,i+nums[i]);
     }
    if(i==index&&index!=n-1){
        index=maxx;
     count++; 
     }
     return rec(nums,n,i+1);
   }
    int jump(vector<int>& nums) {
        if(nums.size()<=1)return 0;
        index=nums[0];
        
        rec(nums,nums.size(),0);
        return 1+count;
    }
};
