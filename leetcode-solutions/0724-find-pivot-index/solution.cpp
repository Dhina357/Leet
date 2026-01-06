class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0;
        for(auto n:nums){
totalSum+=n;
        }
        int left=0;
        for(int i=0;i<nums.size();i++){
           int  right =totalSum-left-nums[i];
             if(right==left){
                return i;

             }
             left+=nums[i];
        }

        return -1;
    }
};
