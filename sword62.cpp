class Solution {
public:
    int lastRemaining(int n, int m) {
        if(n==1)
            return 0;
        int f=lastRemaining(n-1,m);
        return (f+m)%n;
        
    }
};
