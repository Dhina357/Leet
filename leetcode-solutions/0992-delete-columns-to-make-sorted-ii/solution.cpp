class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int deletions = 0;

        // sorted[i] = true means strs[i] <= strs[i+1] already fixed
        vector<bool> sorted(n - 1, false);

        for (int col = 0; col < m; col++) {
            bool bad = false;

            // Step 1: check if this column breaks order
            for (int i = 0; i < n - 1; i++) {
                if (!sorted[i] && strs[i][col] > strs[i + 1][col]) {
                    bad = true;
                    break;
                }
            }

            // If bad, delete this column
            if (bad) {
                deletions++;
                continue;
            }

            // Step 2: update sorted pairs
            for (int i = 0; i < n - 1; i++) {
                if (!sorted[i] && strs[i][col] < strs[i + 1][col]) {
                    sorted[i] = true;
                }
            }
        }

        return deletions;
    }
};


