class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>ans;
        for(auto it: nums){
            int pos=lower_bound(ans.begin(),ans.end(),it)-ans.begin();
            if(pos==ans.size()){
                ans.push_back(it);

            }
            else ans[pos]=it;
        }
        return ans.size();
    }
};
