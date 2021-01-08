class Solution {
public:
    int numWays(int n) {
        if(n==0||n==1) return 1;
        int pre=1,cur=1;
        for(int i=1;i<n;i++){
            int tmp=cur;
            cur=(pre+cur)%1000000007;
            pre=tmp;
        }
        return cur;
    }
};
