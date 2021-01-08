class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        int pre=0,cur=1;
        for(int i=1;i<n;i++){
            int tmp=cur;
            cur=(pre+cur)%1000000007;
            pre=tmp;
        }
        return cur;
    }
};
