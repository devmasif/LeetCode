class Solution {
public:
    int char2Number(char c){
        if (c=='M') return 1000;
        if (c=='D') return 500;
        if (c=='C') return 100;
        if (c=='L') return 50;
        if (c=='X') return 10;
        if (c=='V') return 5;
        if (c=='I') return 1;
        else 
        return 0;
    }

    int romanToInt(string s) {
        int prev = 2147483647;
        int ans = 0;

        for (int i=0; s[i]!='\0' ; i++){
            int curr = char2Number(s[i]);

            if(prev<curr){
                ans += curr - 2 * prev;
            }
            else{
                ans += curr;
            }

            prev = curr;
        }

        return ans;
    }
};