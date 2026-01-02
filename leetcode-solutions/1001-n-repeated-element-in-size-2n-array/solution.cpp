class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> num;
        int nn = nums.size() / 2;
        for (auto n : nums) {
            num[n]++;
            if (num[n] == nn)
                return n;
        }
        return -1;
    }
};
