class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> num;
        int prefix = 0;
        for (auto& d : nums) {
            prefix += d ;
            num.push_back(prefix);
        }
        return num;
    }
};
