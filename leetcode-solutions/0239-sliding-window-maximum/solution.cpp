class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>s;
    vector<int>ans;
    int sum=0;
    for(int r=0;r<k;r++){
s.insert(nums[r]);

    }
    sum=*s.rbegin();
    ans.push_back(sum);
    for(int i=k;i<nums.size();i++){
s.erase(s.find(nums[i-k]));
s.insert(nums[i]);
            sum=*s.rbegin();
            ans.push_back(sum);
           
    }
return ans;
        
    }
};
