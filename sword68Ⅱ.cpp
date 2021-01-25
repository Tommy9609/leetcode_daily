/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> p_path,q_path,tmp;
    bool flag=false;
    void DFS(TreeNode* root,TreeNode* target,vector<TreeNode*>& path){
        if(root==nullptr) return;
        if(flag) return;
        tmp.push_back(root);
        if(root==target) {
            for(TreeNode* x:tmp)
               path.push_back(x);
            flag=true;
            return;
        }
        DFS(root->left,target,path);
        DFS(root->right,target,path);
        tmp.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        DFS(root,p,p_path);
        flag=false;
        tmp.clear();
        DFS(root,q,q_path);
        TreeNode* ans(0);
        for(int i=0;i<p_path.size()&&i<q_path.size();i++){
            if(p_path[i]==q_path[i])
              ans=p_path[i];
        }
        return ans;
    }
};
