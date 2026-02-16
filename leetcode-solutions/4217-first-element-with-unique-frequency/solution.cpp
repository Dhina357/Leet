class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int,int>map2;
        for(int i=0;i<nums.size();i++){
            map2[nums[i]]++;
        }
 map<int,int>map1;
        for(auto &p: map2){
           map1[p.second]++;
        }

         for(auto num: nums){
           if(map1[map2[num]]==1)return num;
        }
        return -1;
    }
};
