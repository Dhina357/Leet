class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> us(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        bool can = true;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ' ') {
                if (can)
                    count++;
                can = true;
            } else {
                if (us.count(text[i])) {
                    can = false;
                }
            }
        }
        if(can)count++;
        return count;
    }
};
