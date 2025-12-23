class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
          sort(events.begin(), events.end());

        int n = events.size();

        // Store start times
        vector<int> starts(n);
        for (int i = 0; i < n; i++) {
            starts[i] = events[i][0];
        }

        // Suffix maximum values
        vector<int> suffixMax(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], events[i][2]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int endTime = events[i][1];
            int value = events[i][2];

            // Find next non-overlapping event
            int idx = lower_bound(starts.begin(), starts.end(), endTime + 1) - starts.begin();

            ans = max(ans, value + suffixMax[idx]);
        }

        return ans;
    }
};
