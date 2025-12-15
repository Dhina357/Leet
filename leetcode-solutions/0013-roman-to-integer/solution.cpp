class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>dhina;
        dhina['I']=1;
        dhina['V']=5;
         dhina['X']=10;
          dhina['L']=50;
           dhina['C']=100;
            dhina['D']=500;
       dhina['M']=1000;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length()&&dhina[s[i]]<dhina[s[i+1]]){
                ans-=dhina[s[i]];
            }
            else{
                ans+=dhina[s[i]];
            }
        }
        return ans;
        }
    
};
