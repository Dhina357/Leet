class Solution {
    public int mirrorFrequency(String s) {
        Map<Character,Integer>freq=new HashMap<>(36);
        int count =0;
        for(char c:s.toCharArray()){
            freq.put(c,freq.getOrDefault(c,0)+1);
        }
        for(int i=0;i<13;i++){
            char pos=(char)('z'-i);
            char po=(char)('a'+i);
           count+= Math.abs(freq.getOrDefault(pos,0)- freq.getOrDefault(po,0));
        }
        for(int i=0;i<5;i++){
            char pos=(char)('9'-i);
            char po=(char)('0'+i);
           count+= Math.abs(freq.getOrDefault(pos,0)- freq.getOrDefault(po,0));
        }
        return count;
    }
}
