class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>map;
        for(int i=0;i<bulbs.size();i++){
            map[bulbs[i]]++;
            
        }
        vector<int>result;
        for(auto &p:map){
            if(p.second %2!=0){
                       result.push_back(p.first);
            }
        }
        return result;
    }
};
