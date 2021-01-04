class Solution {
public:
    int nums=INT_MAX;
    int tmp=0;
    void DFS(int index,vector<int> &coins,int amount){
        if(amount==0) {
            nums=min(nums,tmp);
            return;
        }
        if(amount<0) return;
        if(index==coins.size()) return;
        for(int i=amount/coins[index];i>=0&&i+tmp<nums;i--){
            tmp+=i;
            DFS(index+1,coins,amount-i*coins[index]);
            tmp-=i;
        }
    }

    int coinChange(vector<int>& coins, int amount) {
        sort(coins.rbegin(),coins.rend());         //rbegin(), rend()是逆序
        DFS(0,coins,amount);
        if(nums!=INT_MAX)
        return nums;
        else
        return -1;
    }
};
