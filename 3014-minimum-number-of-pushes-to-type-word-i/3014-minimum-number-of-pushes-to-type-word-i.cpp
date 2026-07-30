class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans = 0;
        int cost = 1;

        while (n >= 8) {
            ans += 8 * cost;
            n -= 8;
            cost++;
        }

        ans += n * cost;
        return ans;
    }
};