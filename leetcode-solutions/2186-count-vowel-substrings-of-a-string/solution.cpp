class Solution {
public:
    int countVowelSubstrings(string word) {
        int n=word.length();
int count=0;
string vowels="aeiou";
        for(int i=0;i<n;i++){
            set<char>seen;
            for(int j=i;j<n;j++){
                char c=word[j];
                if(vowels.find(c)==string::npos){
                    break;
                }
                seen.insert(c);
                if(seen.size()==5){
                    count++;
                }
            }
        }
        return count;
    }
};
