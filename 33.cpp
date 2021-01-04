class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1&&target!=nums[0])
            return -1;
        int first=nums[0];
        int size=nums.size();
        if(target==first)
        return 0;
        else if(target<first)      //要找的目标在后面，可以从后往前查找
        {
          for(int i=size-1;i>0;i--)
         {
            if(target==nums[i])
              return i;
            else if(target>nums[size-1])
              return -1;
            else if(target>nums[i-1]&&target<nums[i])
              return -1;
         }
        }
        else if(target>first)
        {
            for(int i=1;i<size;i++)
            {
                if(target==nums[i])
                  return i;
                else if(target>nums[i-1]&&target<nums[i]&&i>0)
                  return -1;
            }
        }
        return -1;
    }
};
