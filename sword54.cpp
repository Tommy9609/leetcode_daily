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
    int ans=0,index;
    bool flag=false;
    void DFS(TreeNode* root){
        if(root==nullptr) return ;
        DFS(root->right);
        if(index==0) return;
        if(--index==0) ans=root->val;
        DFS(root->left);
    }
    int kthLargest(TreeNode* root, int k) {
        this->index=k;
        DFS(root);
        return ans;
    }
};
