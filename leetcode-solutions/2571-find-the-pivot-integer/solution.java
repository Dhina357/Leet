class Solution {
    public int pivotInteger(int n) {
        int a =(n*n+n)/2;
        int sq=( int) Math.sqrt(a);
        if(sq*sq==a)return sq;
        else return -1;
    }
}
