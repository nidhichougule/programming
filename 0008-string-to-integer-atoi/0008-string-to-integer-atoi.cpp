class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long long result = 0;
        int sign = 1;

        // 1. skip spaces
        while (i < n && s[i] == ' ') i++;

        // 2. sign
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < n && s[i] == '+') {
            i++;
        }

        // 3. digits
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            // 4. overflow check
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;


            
            i++;
        }

        return (int)(sign * result);
    }
};