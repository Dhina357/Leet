class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels=0;
        int ans=0;
        int l=0;
        int n=s.size();
        char vowel[]={'a','e','i','o','u'};
        for(int r=0;r<n;r++){
            if(binary_search(vowel,vowel+5,s[r])){
                vowels++;
            }
            while(r-l+1==k){
                ans=max(ans,vowels);
                 if(binary_search(vowel,vowel+5,s[l])){
                vowels--;
            }
            l++;
            
            }        
            }
            return ans;
        
    }
};
