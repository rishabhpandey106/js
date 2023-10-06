class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)
            return n-1;
        int rem = n % 3;
        if(rem == 0)
            return pow(3,n/3);
        else if(rem == 1)
            return pow(3,n/3 - 1) * 4;
        else if(rem == 2)
            return pow(3,n/3) * 2;
        return 0;
    }
};