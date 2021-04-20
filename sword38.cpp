class Solution {
public:
    unordered_set<string> ans;
    vector<string> res;
    string singl;
    void range(string& s,int index,vector<bool>& visited){
        if(index==s.size()) {
            ans.insert(singl);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(visited[i]==true) continue;
            visited[i]=true;
            singl.push_back(s[i]);
            range(s,index+1,visited);
            singl.pop_back();
            visited[i]=false;
        }
    }
    vector<string> permutation(string s) {
        vector<bool> visited(s.size(),false);
        range(s,0,visited);
        for(const auto i:ans){
            res.push_back(i);
        }
        return res;
    }
};
