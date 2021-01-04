class Solution {
public:
    int robpart(vector<int>& nums){
        if(nums.empty())
        return 0;
        if(nums.size()==1)
        return nums[0];
        if(nums.size()==2)
        return max(nums[0],nums[1]);
        int size=nums.size();
        vector<int> ans(size,0);
        ans[0]=nums[0];
        ans[1]=nums[1];
        ans[2]=ans[0]+nums[2];
        if(size==3)
        return max(ans[1],ans[2]);
        for(int i=3;i<size;i++)
        {
            ans[i]=max(ans[i-3],ans[i-2])+nums[i];
        }
        return max(ans[size-1],ans[size-2]);
    }  

    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> ans1(nums);   //不偷最后一家
        vector<int> ans2(nums);   //不偷第一家
        ans1.pop_back();
        auto it=ans2.begin();
        it=ans2.erase(it);

        return max(robpart(ans1),robpart(ans2));

    }
};
