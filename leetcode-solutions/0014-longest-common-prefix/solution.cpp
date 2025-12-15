class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string dh=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(dh)!=0){
                dh=dh.substr(0,dh.length()-1);
            }
              if(strs.empty()) return "";
        }
        return dh;
    }
};
