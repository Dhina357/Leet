class Solution {
public:
    vector<vector<int>> dhina;
     void rec(int index, vector<int>& nums, vector<int> sub) {
        if (index == nums.size()) {
             dhina.push_back(sub);
        
        
        cout << '\n';
            return;}
            rec(index + 1, nums, sub);
            sub.push_back(nums[index]);
            rec(index + 1, nums, sub);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;

        rec(0, nums, sub);
        return dhina;
    }
};
