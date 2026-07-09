class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> group(n);
        int comp = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] > maxDiff)
                comp++;
            group[i] = comp;
        }

        vector<bool> ans;

        for (auto &q : queries) {
            ans.push_back(group[q[0]] == group[q[1]]);
        }

        return ans;
    }
};