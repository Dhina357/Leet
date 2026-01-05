class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN,avg=0;
        int l=0;
        double sum=0;
        for(int r=0;r<nums.size();r++){
sum+=nums[r];

if((r-l+1)==k){
    ans=max(ans,sum);
    sum-=nums[l];
    l++;

}

        }
        return ans/k;
        
    }
};
