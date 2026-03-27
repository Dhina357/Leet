class Solution {
    public String minWindow(String s, String t) {
    Map<Character,Integer>m=new HashMap<>();
        for(char a:t.toCharArray())
        m.put(a,m.getOrDefault(a,0)+1);
        int l=0;
        int start=0;
        int count=t.length();
        int minlen=Integer.MAX_VALUE;
        for(int r=0;r<s.length();r++){
            char c=s.charAt(r);
            if( m.getOrDefault(c,0)>0)
                 count--;
                 m.put(c,m.getOrDefault(c,0)-1);
                 while(count==0){
                    if((r-l+1)<minlen){
                        minlen=r-l+1;
                        start=l;
                    }
                     char leftChar = s.charAt(l);
                    m.put(leftChar,m.getOrDefault(leftChar,0)+1);
                     if( m.getOrDefault(leftChar,0)>0)
                 count++;
                    l++;
                 }
        }
        if(minlen == Integer.MAX_VALUE)
            return "";
      return s.substring(start, start + minlen);
    }
}
