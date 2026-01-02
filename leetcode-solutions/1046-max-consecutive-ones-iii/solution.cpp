class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        map<int,int>m;
        int l=0,ans=0,cnt=0;
        for (int r=0;r<nums.size();r++){
m[nums[r]]++;
while(m[0]>k){
m[nums[l]]--;
l++;
}
    ans=max(ans,r-l+1);
        }
        return ans;
    }
};
