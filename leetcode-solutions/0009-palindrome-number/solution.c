bool isPalindrome(int x) {
    unsigned int rev =0;
    int digit,temp;
    temp=x;
    while(x>0){
        digit=x%10;
        rev=rev*10+digit;
        x/=10;
    }
    
    if(temp==rev){
         return true;
    }
    else{
        return false;
    }
   return 0;
}
