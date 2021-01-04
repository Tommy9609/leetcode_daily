class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
        return 0;
        unordered_set<char> tmp;
        int res=1;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(i!=0)
              tmp.clear();
            tmp.insert(s[i]);
            for(int j=i+1;j<size;j++)
            {
                if(tmp.count(s[j])==0)
                {
                    tmp.insert(s[j]);
                    int ans=tmp.size();
                    res=max(res,ans);
                }
                else if(tmp.count(s[j])==1)
                   break;
            }
        }
        return res;
    }
};
