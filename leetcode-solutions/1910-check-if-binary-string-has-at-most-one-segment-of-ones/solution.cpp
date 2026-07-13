class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.length();
        for(int i=n-1;i>0;i--){
             if(s[i]=='1'&&s[i-1]!='1') return false;
             
        }
return true;
    }
};
