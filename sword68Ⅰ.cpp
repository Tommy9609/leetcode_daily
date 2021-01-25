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
    vector<TreeNode*> Getpath(TreeNode* root,TreeNode* target){
        vector<TreeNode*> path;
        while(root!=nullptr){
            path.push_back(root);
            if(root->val==target->val){
                break;
            }
            else if(root->val<target->val)
               root=root->right;
            else if(root->val>target->val)
               root=root->left;
        }
        return path;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> p_path=Getpath(root,p);
        vector<TreeNode*> q_path=Getpath(root,q);
        TreeNode* ans(0);
        for(int i=0;i<p_path.size()&&i<q_path.size();i++){
            if(p_path[i]==q_path[i])
               ans=p_path[i];
        }
        return ans;
        
    }
};
