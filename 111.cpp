/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=INT_MAX;
    int index=0;
    void DFS(TreeNode* root)
    {
        if(root==nullptr)
            return;
        index++;
        if(root->left==nullptr&&root->right==nullptr) //判断叶子节点
             ans=min(ans,index);     //每次都取ans最小的值
        DFS(root->left);
        DFS(root->right);
        index--;

    }
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        DFS(root);
        return ans;
    }
};
