class Solution {
private:
    vector<string> int2str(vector<int>& nums ){
        vector<string> res(nums.size(),"0");
        for(int i=0;i<nums.size();i++){
            res[i]=to_string(nums[i]);
        }
        return res;
    }
public:
    static bool compare(string& s1,string& s2){
        return s1+s2<s2+s1;
    }
    string minNumber(vector<int>& nums) {
        vector<string> str=int2str(nums);
        sort(str.begin(),str.end(),compare);
        string ans;
        for(int i=0;i<str.size();i++){
            ans+=str[i];
        }
        return ans;
        
    }
};
