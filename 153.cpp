class Solution {
public:
    int findMin(vector<int>& nums) {
        int tmp;
        bool flag=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
              tmp=nums[i+1];
              flag=true;
              }
        }
    if(flag)
    return tmp;
    else
    return nums[0];
    }
};
