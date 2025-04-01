class Solution {
public:
    bool isPalindrome(int num) {
        if(num < 0) 
        return false;
        long long x = num , y=0;
        while (num !=0){
            long long digit=num  % 10;
            y = y *10 +digit;
            num/= 10;
        }
        return x == y;
        

    }
};