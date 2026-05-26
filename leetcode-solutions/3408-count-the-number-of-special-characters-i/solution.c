int result(char *word){
    int lower[26]={0};
    int upper[26]={0};
    for(int i=0;word[i]!='\0';i++){
        if(islower(word[i]))
        lower[word[i]-'a']++;
        else if (isupper(word[i]))
        upper[word[i]-'A']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
if(upper[i]&&lower[i])count++;
    }
    return count;

}
    int numberOfSpecialChars(char* word) {
    return result(word);

}
