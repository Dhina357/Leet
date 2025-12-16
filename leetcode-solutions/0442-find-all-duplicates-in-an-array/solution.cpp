class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int,int>freq;
        vector<int>res;
        for(int num:nums){
            freq[num]++;
            if(freq[num]==2)
            res.push_back(num);

        }
        return res;
    }
};
