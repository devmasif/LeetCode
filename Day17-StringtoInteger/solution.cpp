#include <iostream>
#include <string>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

class Solution {
    public:
        int myAtoi(string s) {
        int i = 0, n = s.length();
        long long ans = 0;
        bool neg = false;

            while (i < n && s[i] == ' ') i++;

            if (i < n && (s[i] == '+' || s[i] == '-')) {
                if (s[i] == '-') neg = true;
                i++;
            }

            while (i < n && isdigit(s[i])) {
                ans = ans * 10 + (s[i] - '0');

                if (!neg && ans > INT_MAX) return INT_MAX;
                if (neg && -ans < INT_MIN) return INT_MIN;

                i++;
            }

            return neg ? -ans : ans;
        }
};

int main() {
    Solution sol;

    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int result = sol.myAtoi(input);
    cout << "Converted integer: " << result << endl;

    return 0;
}
