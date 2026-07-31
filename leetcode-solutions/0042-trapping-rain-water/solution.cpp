class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int lm=0,rm=0;
        long long w=0;
        while(l<r){
            lm=max(lm,height[l]);
            rm=max(rm,height[r]);
            if(lm<=rm){
                w+=lm-height[l];
                l++;

            }
            else{
                w+=rm-height[r];
    r--;
            }
        }
        return (int)w;
    }
};
