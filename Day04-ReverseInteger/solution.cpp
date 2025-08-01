class Solution {
public:
    int reverse(int x) {
        
        long temp;
        long rev = 0;

        int min = INT_MIN;
        int max = INT_MAX;


        if (x < min || x > max)
        return 0;
    
        while(x != 0){
            temp = x%10;  
            rev = rev * 10 + temp; 
            x = x/10;
        }

        if (rev < min || rev > max)
        return 0;

        

        return rev;
    }
};