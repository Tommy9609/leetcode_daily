class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int size=nums.size();
        if(size<2) return false;
        int maxnum=0,sum=0;
        for(int i=0;i<size;i++){
            maxnum=max(maxnum,nums[i]);
            sum+=nums[i];
        }
        int target=sum/2;
        if(sum%2||maxnum>target) return false;
        vector<vector<int>>ans(size,vector<int>(target+1,0));
        ans[0][nums[0]]=true;
        ans[0][0]=true;
        for(int i=1;i<size;i++){
            for(int j=0;j<=target;j++){
                if(j==0)                ans[i][j]=true;
                else if(j>=nums[i])     ans[i][j]=ans[i-1][j]|ans[i-1][j-nums[i]];
                else                    ans[i][j]=ans[i-1][j];
            }
        }
        return ans[size-1][target];
    }
};
