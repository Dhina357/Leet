class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int maxx=*max_element(nums.begin(),nums.end());
            vector<int>freq(maxx+1,0);
            for(auto a:nums){
                  freq[a]+=a;
            }

 if (maxx == 1) {
            return freq[1];
        }
vector<int>ans(maxx+1,0);
ans[0]=freq[0];
ans[1]=max(freq[0],freq[1]);
            for(int i=2;i<=maxx;i++){
               ans[i]=max(ans[i-1],ans[i-2]+freq[i]);
            }
   return ans[maxx];  
     }
};
