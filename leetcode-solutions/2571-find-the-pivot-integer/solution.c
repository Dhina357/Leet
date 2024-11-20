int total(int start, int end){
    int n = end - start + 1;
   return (start - 1) * n + (n * (n + 1)) / 2;
}

int pivotInteger(int n) {
    for(int i = 1; i <= n; i++) {
        if(total(1, i) == total(i, n)) {
            return i;
        }
    }
    return -1;
}
