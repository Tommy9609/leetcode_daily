class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty()||(nums.size()==1&&nums[0]==0))
        return;
        int size=nums.size();
        int left=0,right=size-1;
        while(left!=right)
        {
            if(nums[left]==0)
            {
                auto it=nums.begin()+left;
                it=nums.erase(it);
                nums.push_back(0);
                right--;
            }
            else if(nums[left]!=0)
                left++;
        }
    }
};
