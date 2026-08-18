class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int[] sarr=new int[26];
        int[] parr=new int[26];
        int n=s.length();
        int m=p.length();
        List<Integer>ans=new ArrayList<>();
        if (n < m) {
            return ans; 
        }
        for(int i=0;i<m;i++){
            parr[p.charAt(i)-'a']++;
            sarr[s.charAt(i)-'a']++;
        }
        if(Arrays.equals(parr,sarr))ans.add(0);
        for(int i=m;i<n;i++){
            sarr[s.charAt(i-m)-'a']--;
            sarr[s.charAt(i)-'a']++;
            if(Arrays.equals(parr,sarr)){
                ans.add(i-m+1);
            }
        }
return ans;
        
    }
}
