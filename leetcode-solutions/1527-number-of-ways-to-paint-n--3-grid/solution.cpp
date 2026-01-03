class Solution {
public:
    int numOfWays(int n) {
      
        const int MOD = 1e9 + 7;
        
        // Initial state for n = 1:
        // 6 patterns with different ends (e.g., RYG) and 6 patterns with same ends (e.g., RGR)
        long long diff = 6;  // patterns ending with different ends (State D)
        long long same = 6;  // patterns ending with same ends (State S)
        
        for (int i = 2; i <= n; i++) {
            long long newDiff = (2 * diff + 2 * same) % MOD;
            long long newSame = (2 * diff + 3 * same) % MOD;
            
            diff = newDiff;
            same = newSame;
        }
        
        return (diff + same) % MOD;
    }
};
