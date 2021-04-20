class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        unordered_map<char,int> hash;
        int ans=0,res=0;
        int pre=0;
        for(int i=0;i<s.size();i++){
            if(hash.find(s[i])==hash.end()){
                ans=pre+1;
                hash[s[i]]=i;
            }
            else if(hash.find(s[i])!=hash.end()){
                if(pre>=i-hash[s[i]]){
                    ans=i-hash[s[i]];
                    hash[s[i]]=i;
                }
                else{
                    ans=pre+1;
                    hash[s[i]]=i;
                }
            }
            pre=ans;
            res=max(res,ans);
        }
        return res;
    }
};
