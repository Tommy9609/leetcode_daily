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
    bool DFS(TreeNode* lef, TreeNode* rig){
        if(lef==nullptr&&rig==nullptr)  return true;
        if(lef==nullptr||rig==nullptr||lef->val!=rig->val) return false;

        return DFS(lef->left,rig->right)&&DFS(lef->right,rig->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return DFS(root->left,root->right);
        }
};
