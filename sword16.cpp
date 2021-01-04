class Solution {
public:

    double myPow(double x, int n) {
        double ans=1;
        long num;
        num=n>0?n:-(long)n;
        while(num>0){
            if(num&1==1) ans*=x;
            x*=x;
            num>>=1;
        }
        return n>0?ans:(1/ans);
    }
};
