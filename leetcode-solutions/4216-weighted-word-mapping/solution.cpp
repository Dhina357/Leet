class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
        string s;
        for(auto a:words){
            int count =0;
            for(auto b:a){
                count+=weights[b-'a'];
            }
            count%=26;
           s.push_back (char('z'-count));
        }
        
        return s;
    }
};
