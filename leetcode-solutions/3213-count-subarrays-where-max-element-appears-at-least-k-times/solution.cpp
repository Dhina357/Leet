class Solution {
public:
    long long atMax(vector<int>& nums, int k) {
        if (k < 0)
            return 0;
     int mx=*max_element(nums.begin(),nums.end());
     
        int l = 0, ans = 0;
        long long cnt = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r]==mx) {
               ans++;
            }
            while  (ans> k) {
                 if (nums[l]==mx)
               ans--;
                l++;
            }

            cnt += r - l + 1;
        }
        return cnt;
    }
    
    long long countSubarrays(vector<int>& nums, int k) {
        long long n=nums.size();
        long long total =n*(n+1ll)/2;
        return  total- atMax(nums, k - 1);
    }
};
