class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
       int i=nums.size();
        while(--i){
            if(nums[i]==nums[i-1])
             return true;
        }
        return false;
    }
};
