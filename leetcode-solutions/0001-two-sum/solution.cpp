class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
                unordered_map<int,int>dhina;
                for(int i=0;i<nums.size();i++){
                    int need=target-nums[i];
                    if(dhina.count(need)){
                        return{dhina[need],i};
                    }
                    dhina[nums[i]]=i;
                }
                return {};
    }
};
