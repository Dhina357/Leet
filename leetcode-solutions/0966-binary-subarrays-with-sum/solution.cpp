class Solution {
public:
    int atind(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int cnt=0,sum=0,l=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
        }
return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atind(nums,goal)-atind(nums,goal-1);
    }
};
