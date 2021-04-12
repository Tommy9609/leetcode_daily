class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        if(size==1)  return nums[0];
        int late=0,pre=nums[0];
        int res=pre;
        for(int i=1;i<size;i++){
            if(pre<0) late=nums[i];
            else      late=pre+nums[i];
            pre=late;
            res=max(late,res);
        }
        return res;
        }
};
