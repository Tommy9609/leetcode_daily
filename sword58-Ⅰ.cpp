class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string tmp;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')
                tmp+=s[i];
            else{
                if(!tmp.empty()){
                    ans.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        if(!tmp.empty()){
            ans.push_back(tmp);
            tmp.clear();
        }
        for(int i=ans.size()-1;i>=0;i--){
            tmp+=ans[i];
            tmp+=" ";
        }
        tmp.pop_back();
        return tmp;
    }
};
