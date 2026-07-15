char* reverseWords(char* s) {
    int n=strlen(s);
    char *words[10005];
    int count=0;
    char *token=strtok(s," ");
    while(token!=NULL){
        words[count++]=token;
        token=strtok(NULL," ");
    }
    char *result=(char*)malloc((n+1)*sizeof(char));
    result[0]='\0';
    for(int i=count-1;i>=0;i--){
        strcat(result,words[i]);
        if(i>0)strcat(result," ");
    }

    return result;
}
