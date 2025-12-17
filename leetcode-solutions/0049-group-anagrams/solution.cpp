class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>dhina;
        for(auto s:strs){
            string x =s;
            sort(x.begin(),x.end());
            dhina[x].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto &d:dhina){
            ans.push_back(d.second);
        }
return ans;
    }
};
