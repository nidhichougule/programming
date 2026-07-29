class Solution {
public:
    using ll = long long;

    string smallestPalindrome(string s, int k) {
        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        string mid = "";
        vector<int> half(26);

        int m = 0;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] & 1)
                mid.push_back(char('a' + i));
            half[i] = cnt[i] / 2;
            m += half[i];
        }

        auto comb = [&](int n, int r) -> ll {
    if (r > n) return 0;
    r = min(r, n - r);

    ll ans = 1;

    for (int i = 1; i <= r; i++) {
        ans = ans * (n - r + i) / i;
        if (ans >= (ll)k)
            return (ll)k;
    }

    return ans;
};

        auto ways = [&](vector<int>& f) -> ll {
    int rem = 0;
    for (int x : f)
        rem += x;

    int left = rem;
    ll ans = 1;

    for (int i = 0; i < 26; i++) {
        if (f[i] == 0)
            continue;

        ll c = comb(left, f[i]);

        if (ans > (ll)k / max(1LL, c))
            ans = k;
        else
            ans *= c;

        if (ans >= (ll)k)
            return (ll)k;

        left -= f[i];
    }

    return ans;
};

        if (ways(half) < k)
            return "";

        string left = "";

        while ((int)left.size() < m) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                half[c]--;

                ll w = ways(half);

                if (w >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= w;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};