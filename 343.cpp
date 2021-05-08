class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        vector<int> ans(n+1,1);
        ans[0]=0;
        for(int i=3;i<=n;i++){
            ans[i]=max(max(2*(i-2),2*ans[i-2]),max(3*(i-3),3*ans[i-3]));
        }
        return ans[n];
    }
};
