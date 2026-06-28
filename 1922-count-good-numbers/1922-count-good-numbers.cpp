class Solution {
public:
    long long mod = 1e9 + 7;
    long long power(long long x, long long n){
        if(n == 0) return 1;
        long long half = power(x, n/2);
        if(n % 2 == 0){
            return (half * half) % mod;
        }
        else{
            return (half * half % mod * x) % mod;
        }
    }
    int countGoodNumbers(long long n) {
        long long evenPlaces = (n + 1) / 2;
        long long oddPlaces = n / 2;
        long long ans = power(5, evenPlaces) * power(4, oddPlaces);
        return ans % mod;
    }
};