class Solution {
    public int firstMatchingIndex(String s) {
        String rev=new StringBuilder(s).reverse().toString();
        char a[]=s.toCharArray();
         char b[]=rev.toCharArray();
        for(int i=0;i<=s.length()/2;i++){
            if(a[i]==b[i])return i;
        }
        return -1;
    }
}
