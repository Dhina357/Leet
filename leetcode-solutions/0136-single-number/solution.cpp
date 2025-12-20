class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0;
        for(auto d:nums)
        xr=xr^d;
        return xr;
    }
};
