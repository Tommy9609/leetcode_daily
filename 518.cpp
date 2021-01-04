class Solution {
public:
    
    int change(int amount, vector<int>& coins) {
        vector<int> ans(amount+1,0);
        ans[0]=1;
        for(int i=0;i<coins.size();i++){
            for(int j=1;j<=amount;j++){
                if(j-coins[i]>=0){
                    ans[j]+=ans[j-coins[i]];
                }
            }
        }
        return ans[amount];
    }
};
