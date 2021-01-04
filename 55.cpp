class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int reachmost=nums[0];
        for(int i=0;i<size;i++)
        {
            if(reachmost<i)
                return false;
            reachmost=max(reachmost,i+nums[i]);
            if(reachmost>=size-1)
                return true;
        }
        return false;
    }
};
