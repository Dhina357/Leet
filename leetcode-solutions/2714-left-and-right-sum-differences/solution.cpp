class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum;
        vector<int>rightSum;
long long sum=0;
 leftSum.push_back(sum);
        for(auto n:nums){
            sum+=n;
            leftSum.push_back(sum);
        }
        for(int i=0;i<nums.size();i++){
            int ans=abs(leftSum[i]-abs(leftSum[i+1]-sum));
rightSum.push_back(ans);
        }
        return rightSum;
    }
};
