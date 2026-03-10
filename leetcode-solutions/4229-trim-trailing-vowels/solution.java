class Solution {
    public String trimTrailingVowels(String s) {
        char[] vowel={'a','e','i','o','u'};
        int n=s.length();
        while(n>0&&isvowel(s.charAt(n-1),vowel)){
            n--;
        }
        return s.substring(0,n);
        
    }
    public boolean isvowel(char c,char[] vowel){
        for(char a:vowel)
        if(c==a)return true;
        return false;
    }
}
