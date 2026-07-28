class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
       if(n<3)return s;

      map<char,int>freq;
       for(char a: s)
       freq[a]++;
       string ans;
      
       for(const auto &[k,v]:freq){
        
       for(int i=0;i<v/2;i++){
        ans.push_back(k);
       }
        
       }
       string rev=ans;
       reverse(ans.begin(),ans.end());
       if(n%2!=0)
       return rev+s[n/2]+ans;
       return rev+ans;
       
        
    }
};
