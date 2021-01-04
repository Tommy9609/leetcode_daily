class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sumprofit=0;
        int everyprofit=0;
        int size=prices.size();
        for(int i=1;i<size;i++)
        {
            sumprofit+=max(0,prices[i]-prices[i-1]);
        }
        return sumprofit;
    }
};
