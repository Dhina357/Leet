class Solution {
    public int minOperations(String s) {
        int n=s.length();
        char[] words =s.toCharArray();
        Arrays.sort(words);
        String t=new String(words);
         if(t.equals(s))return 0;
         if(t.charAt(0)==s.charAt(0)||t.charAt(n-1)==s.charAt(n-1))return 1;
if(n>2){
         if(t.charAt(0)==s.charAt(n-1)&&s.charAt(0)==t.charAt(n-1)){
            if(t.charAt(0)==t.charAt(1)||t.charAt(n-1)==t.charAt(n-2))return 2;
            return 3;
         }
         return 2;
         }
         return -1;

    }
}
