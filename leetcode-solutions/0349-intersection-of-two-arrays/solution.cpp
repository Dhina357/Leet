class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>seen(nums1.begin(),nums1.end());
        vector<int>result;
        for(auto a:nums2){
            if(seen.contains(a)){
                result.push_back(a);
                seen.erase(a);
            }
        }
        return result;
        
    }
};
