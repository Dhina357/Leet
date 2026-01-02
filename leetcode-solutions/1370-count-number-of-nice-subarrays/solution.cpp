class Solution {
public:
    int atMax(vector<int>& nums, int k) {
        if (k < 0)
            return 0;
      
        int l = 0, ans = 0, cnt = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 != 0) {
               ans++;
            }
            while  (ans> k) {
                 if (nums[l] % 2 != 0)
               ans--;
                l++;
            }

            cnt += r - l + 1;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return atMax(nums, k) - atMax(nums, k - 1);
    }
};
