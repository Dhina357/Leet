class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max=nums[n-1];
        int min=nums[0];
        vector<int>ans;
        if(min-max+1==n)return ans;
       for(int i=1;i<n;i++){
             while(min+1!=nums[i]){
                min++;
                ans.push_back(min);
             }
             min++;
        }
        return ans;
    }
};
