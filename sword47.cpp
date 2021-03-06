class Solution1 {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m=grid.size();       //行
        int n=grid[0].size();    //列
        vector<vector<int>> ans(m,vector(n,0));
        ans[0][0]=grid[0][0];
        for(int i=1;i<m;i++){
            ans[i][0]=ans[i-1][0]+grid[i][0];
        }
        for(int i=1;i<n;i++){
            ans[0][i]=ans[0][i-1]+grid[0][i];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++)
            ans[i][j]=max(ans[i-1][j],ans[i][j-1])+grid[i][j];
        }
        return ans[m-1][n-1];
    }
};

class Solution2 {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();    //列
        vector<int> ans(n,0);
        ans[0]=grid[0][0];
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+grid[0][i];
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==0)
                  ans[0]=ans[0]+grid[i][0];
                else{
                  ans[j]=max(ans[j-1],ans[j])+grid[i][j];
                }
            }
        }
        return ans[n-1];
    }
};
