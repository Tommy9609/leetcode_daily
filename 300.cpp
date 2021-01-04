class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans(nums.size(),1);    //ans[i]代表以第i个数结尾的最长递增子序列
        int res=1;
        for(int i=1;i<nums.size();i++){
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i]){
                    ans[i]=max(ans[i]-1,ans[j])+1;
                }
            }
        res=max(res,ans[i]);
        }
        return res;
    }
};
