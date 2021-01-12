class Solution {
public:
    vector<double> dicesProbability(int n) {
        vector<vector<double>> ans(n+1,vector<double>(6*n+1,0));   //最后一行的长度为 n-6*n
        for(int i=1;i<7;i++){
            ans[1][i]=1;
        }
        for (int i = 2; i <= n; i ++) {
            for (int j = i; j <= 6*i; j ++) {
                for (int cur = 1; cur <= 6; cur ++) {
                    if (j - cur <= 0) {
                        break;
                    }
                    ans[i][j] += ans[i-1][j-cur];
                }
            }
        }
        vector<double> res(ans[n].begin()+n,ans[n].end());
        for(int i=0;i<res.size();i++){
            res[i]=res[i]/pow(6,n);
        }
        return res;
    }
};
