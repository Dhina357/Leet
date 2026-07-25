class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),[](vector<int>&a,vector<int>&b){
             if (a[0] == b[0]) {
                return a[1] > b[1]; 
            }
            return a[0] < b[0];
        });
        vector<int>ans;
        for(auto it:envelopes){
            int pos=lower_bound(ans.begin(),ans.end(),it[1])-ans.begin();
            if(pos==ans.size())ans.push_back(it[1]);
            else ans[pos]=it[1];
        }
        return ans.size();
    }
};
