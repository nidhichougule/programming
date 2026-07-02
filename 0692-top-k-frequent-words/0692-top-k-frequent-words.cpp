class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;

        // Count frequency
        for (string &word : words) {
            freq[word]++;
        }

        // Store unique words
        vector<string> ans;
        for (auto &it : freq) {
            ans.push_back(it.first);
        }

        // Sort according to the problem's rules
        sort(ans.begin(), ans.end(), [&](string &a, string &b) {
            if (freq[a] == freq[b])
                return a < b;          // Lexicographically smaller first
            return freq[a] > freq[b];  // Higher frequency first
        });

        // Keep only first k words
        ans.resize(k);

        return ans;
    }
};