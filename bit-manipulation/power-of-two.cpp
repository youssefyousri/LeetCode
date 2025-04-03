class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return (n > 0) && ((n & (n - 1)) == 0);
        int m=sqrt(n);
        if(n==1)return true ;
     else if(m%2==0)
        return true ;
        else 
        return false;
        
    }
};