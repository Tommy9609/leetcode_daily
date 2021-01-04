class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        int pt=0;
        int rpt=size-1;
        for(int i=0;i<size;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[pt]);
                pt++;
            }
        }
        for(int i=0;i<size;i++)
        {
            if(nums[i]==1)
            {
                swap(nums[i],nums[pt]);
                pt++;
            }
        }
    }
};
