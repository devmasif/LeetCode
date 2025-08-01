class Solution {
public:
    char Num2Char(int n){
        if(n==1000) return 'M';
        if(n==500) return 'D';
        if(n==100) return 'C';
        if(n==50) return 'L';
        if(n==10) return 'X';
        if(n==5) return 'V';
        if(n==1) return 'I';
        else 
            return ' ';
    }

    string intToRoman(int num) {
        string ans = "";
        int divisor = 1000;
        while(num>0){
            int x = num/divisor;
            while(x>0){
                if(x==9){
                    ans += Num2Char(divisor);
                    ans += Num2Char(divisor*(x+1));
                    break;
                }
                if(x>=5){
                    ans += Num2Char(divisor*5);
                    x -=5;
                    continue;
                }
                if(x==4){
                    ans += Num2Char(divisor);
                    ans += Num2Char(divisor*(x+1));
                    break;
                }
                ans += Num2Char(divisor);
                x--;
            }
            num %= divisor;
            divisor = divisor/10;

        }
        return ans;
    }
};