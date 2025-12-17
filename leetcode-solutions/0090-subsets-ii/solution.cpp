class Solution {
public:
    vector<vector<int>> dhina;
    void rec(int index, vector<int>& nums, vector<int> sub) {
        if (index == nums.size()) {
            dhina.push_back(sub);
            return;
        }
        rec(index + 1, nums, sub);
        sub.push_back(nums[index]);
        rec(index + 1, nums, sub);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> sub;
sort(nums.begin(), nums.end());
        rec(0, nums, sub);
        set<vector<int>> s;
        for (auto& d : dhina) {
            s.insert(d);
        }
        vector<vector<int>> ans(s.begin(), s.end());
        return ans;
    }
};
