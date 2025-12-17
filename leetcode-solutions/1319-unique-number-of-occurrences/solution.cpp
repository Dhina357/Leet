class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>dhina;
        for(int x:arr){
            dhina[x]++;
        }
        unordered_set<int>dh;
        for(auto &d:dhina){
            if(dh.count(d.second))return false;
            dh.insert(d.second);
        }
        return true;
    }
};
