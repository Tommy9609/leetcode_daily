class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        for(auto &x:nums)
        {
            x+=1;
        }
        int index=0;
        for(int i=0;i<nums.size();i++)
        {
            index=abs(nums[i])-1;
            if(nums[index]>0)
               nums[index]*=-1;
            else if(nums[index]<0)
               break;
        }
        return index;
    }
};
