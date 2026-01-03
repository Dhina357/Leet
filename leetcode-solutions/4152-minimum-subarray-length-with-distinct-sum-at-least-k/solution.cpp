class Solution {
public:
    int minLength(vector<int>& nums, int k) {
               vector<int> drelanvixo = nums;

        unordered_map<int,int> freq;
        long long distinctSum = 0;
        int n = nums.size();
        int ans = INT_MAX;

        int l = 0;

        for(int r = 0; r < n; r++){

            if(++freq[nums[r]] == 1)
                distinctSum += nums[r];

            while(distinctSum >= k){
                ans = min(ans, r - l + 1);

                if(--freq[nums[l]] == 0)
                    distinctSum -= nums[l];

                l++;
            }
        }

        return ans == INT_MAX ? -1 : ans;

    }
};
