class Solution {
public:
    int numberOfSubstrings(string s) {
        int last[3]={-1,-1,-1};
        int count=0;
        for(int i=0;i<s.length();i++){
            last[s[i]-'a']=i;
          int v=  min({last[0],last[1],last[2]});
          count+=v+1;

        }
        return count;
        
    }
};
