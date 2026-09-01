class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> os;
        int ma = 0, l = 0;
        for (int r = 0; r < s.length(); r++) {

            while(os.count(s[r])!=0) {
                os.erase(s[l]);
                l++;

            }
            os[s[r]]++;
            ma=max(ma,r-l+1);
        }
        return ma;
    }
};
