class Solution {
public:
    long long appealSum(string s) {
        long long total_appeal = 0;
    long long current_substrings_appeal = 0;
    std::vector<int> last_seen(26, -1); // Initialize with -1

    for (int i = 0; i < s.length(); ++i) {
        int char_idx = s[i] - 'a';
        
        // The new character s[i] adds 1 appeal to all substrings 
        // starting after its last seen position.
        current_substrings_appeal += (i - last_seen[char_idx]);
        
        total_appeal += current_substrings_appeal;
        
        // Update the last seen position
        last_seen[char_idx] = i;
    }

    return total_appeal;
    }
};
