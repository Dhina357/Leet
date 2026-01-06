class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long totalSum=0;
        for(auto n:nums){
            totalSum+=n;
        }
        long long left=0,cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i];
         long long right=totalSum-left;
            if(left>=right)cnt++;
        }
        return cnt;
    }
};
