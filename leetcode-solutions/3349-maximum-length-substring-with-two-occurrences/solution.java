class Solution {
    public int maximumLengthSubstring(String s) {
        Map<Character,Integer>freq=new HashMap<>();
        int max=0;
        int count=0;
        int l=0;
        for(int r=0;r<s.length();r++){
            char right=s.charAt(r);
            freq.put(right,freq.getOrDefault(right,0)+1);
            while(freq.get(right)>2){
                char left=s.charAt(l++);
               freq.put(left,freq.get(left)-1);
                count--;

            }
            count=r-l+1;
           if(max<count)max=count;
        }
        return max;
    }
}
