#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size() - 1;

        bool flag = false;
        int length = 0;
        for (int i = size; i >= 0; i--) {
            if (s[i] != ' ') {
                flag = true;
                length++;
            } else if (flag) {
                break;
            }
        }

        return length;
    }
};

int main() {
    Solution obj;
    string input;
    getline(cin, input);
    cout << obj.lengthOfLastWord(input) << endl;
    return 0;
}
