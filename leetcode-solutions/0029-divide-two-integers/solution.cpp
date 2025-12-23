class Solution {
public:
    int divide(int dividend, int divisor) {
       long long a= dividend;
       long long b= divisor;
       long long res =a/b;
       if(res>INT_MAX)return INT_MAX;
       if(res<INT_MIN)return INT_MIN;
        return (int)res;
        
    }
};
