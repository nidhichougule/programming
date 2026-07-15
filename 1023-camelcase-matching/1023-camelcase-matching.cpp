class Solution {
public:
    bool match(string query, string pattern) {
        int i = 0, j = 0;

        while (i < query.size()) {

            if (j < pattern.size() && query[i] == pattern[j]) {
                i++;
                j++;
            }
            else if (islower(query[i])) {
                i++;
            }
            else {
                return false;
            }
        }

        return j == pattern.size();
    }

    vector<bool> camelMatch(vector<string>& queries, string pattern) {

        vector<bool> ans;

        for (string q : queries) {
            ans.push_back(match(q, pattern));
        }

        return ans;
    }
};