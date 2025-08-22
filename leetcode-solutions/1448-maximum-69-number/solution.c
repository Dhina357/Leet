int maximum69Number (int num) {
    int n=-1,nn=0,temp=num;
    while(temp!=0){
        if(temp%10==6)n=nn;
         temp=temp/10;
        nn++;
    }
    return num+ 3* (int) pow(10,n);
    }
    

