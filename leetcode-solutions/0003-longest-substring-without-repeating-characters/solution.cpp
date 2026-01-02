class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> os;
        int ma = 0, l = 0;
        for (int r = 0; r < s.length(); r++) {

            while(os.count(s[r])) {
                os.erase(s[l]);
                l++;

            }
            os.insert(s[r]);
            ma=max(ma,r-l+1);
        }
        return ma;
    }
};
