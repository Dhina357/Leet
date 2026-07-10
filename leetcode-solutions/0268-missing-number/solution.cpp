class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int curr=0;
      int i=0;
      while(curr<nums.size()){
        if(curr++!=nums[i++])return curr-1;
      }
        return curr;
    }
};
