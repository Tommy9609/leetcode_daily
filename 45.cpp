class Solution {
public:
    int jump(vector<int>& nums) {
        int fardist=nums[0],ans=0,boundary=0;
        for(int i=0;i<nums.size()-1;i++){
            fardist=max(fardist,i+nums[i]);
            if(i==boundary){      //每次到达边界的时候步数+1
                boundary=fardist;
                ans++;
            }
        }
        return ans;
    }
};
