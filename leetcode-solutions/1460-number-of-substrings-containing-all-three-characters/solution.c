int min(int a, int b) { return a > b ? b : a; }
int numberOfSubstrings(char* s) {
    int count = 0;
    int last[3] = {-1,-1,-1};
    for (int i = 0; s[i] != '\0'; i++) {
        last[s[i] - 'a'] = i;
        int v = min(last[0], min(last[1], last[2]));
        count += v + 1;
    }
    return count;
}
