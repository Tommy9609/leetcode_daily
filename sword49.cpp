class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n,0);
        ans[0]=1;
        int a=0,b=0,c=0;
        for(int i=1;i<n;i++){
        int t1=ans[a]*2,t2=ans[b]*3,t3=ans[c]*5;
        ans[i]=min(min(t1,t2),t3);
        if(ans[i]==t1) a++;
        if(ans[i]==t2) b++;
        if(ans[i]==t3) c++;
        }
        return ans[n-1];
    }
};
