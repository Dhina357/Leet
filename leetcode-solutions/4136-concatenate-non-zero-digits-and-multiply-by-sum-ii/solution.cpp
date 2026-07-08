class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.length();
        long long MOD = 1e9 + 7;
        vector<long long> power(n + 1, 1);
        for (int i = 0; i < n; i++) {
            power[i + 1] = (power[i] * 10) % MOD;
        }
        vector<int> prefixSum(n + 1, 0);
        vector<long long> prefixVal(n + 1, 0);
        vector<long long> prefixcount(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i];
            prefixVal[i + 1] = prefixVal[i];
            prefixcount[i + 1] = prefixcount[i];
            if (s[i] != '0') {
                int digit = s[i] - '0';
                prefixSum[i + 1] += digit;
                prefixVal[i + 1] = (prefixVal[i] * 10 + digit) % MOD;
                prefixcount[i + 1]++;
            }
        }
        vector<int> ans;
        ans.reserve(queries.size());
        for (auto& q : queries) {
            int l = q[0] + 1;
            int r = q[1] + 1;
            int cnt = prefixcount[r] - prefixcount[l - 1];
            if (cnt == 0) {
                ans.push_back(0);
                continue;
            }
            long long sum = prefixSum[r] - prefixSum[l - 1];
            long long x =
                (prefixVal[r] - (prefixVal[l - 1] * power[cnt])%MOD + MOD) % MOD;
            long long X = (x * sum) % MOD;
            ans.push_back(X);
        }
        return ans;
    }
};
