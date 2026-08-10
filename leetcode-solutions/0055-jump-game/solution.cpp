class Solution {
public:
int index=0;
bool rec(vector<int>&nums,int n,int i){
    if(index>=n-1)return true;
    if(i>index)return false;

    if(i+nums[i]>index)index=i+nums[i];
return  rec(nums,n,i+1);
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
       return rec(nums,n,0);
    }
};
