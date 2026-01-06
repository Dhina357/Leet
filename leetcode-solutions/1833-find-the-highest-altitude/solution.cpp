class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=INT_MIN,sum=0;
        for(auto a:gain){
            sum+=a;
            ans=max(ans,sum);

        }
        return ans<0?0:ans;
        
    }
};
