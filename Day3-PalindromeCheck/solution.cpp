class Solution {
public:
    bool isPalindrome(int x){    
        if (x<0)
            return false;
        
        int y = x;
        long int temp, x_rev = 0;

        while(y>0){
            temp = y % 10;
            x_rev = x_rev * 10 + temp;
            y = y/10;
        }

        return x == x_rev;
    }
};