class Solution {
public:
    int cuttingRope(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        vector<int> ans(n+1,0);
        ans[1]=1;
        ans[2]=2;
        ans[3]=3;
        for(int i=4;i<=n;i++){
            for(int j=1;j<=i/2;j++)  //过了i/2以后，就是一模一样的分法了
                ans[i]=max(ans[j]*ans[i-j],ans[i]);
        }
        return ans[n];
    }
}; 
