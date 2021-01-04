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
    bool DFS(TreeNode* A,TreeNode* B){
        if(B==nullptr) return true;
        if(A==nullptr) return false;
        if(A->val!=B->val) return false;

        return DFS(A->left,B->left)&&DFS(A->right,B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(!A||!B)  return false;                     //第一次做的时候少了这一段  因为这个函数也包含一个递归 所以也要终止条件
        bool flag=false;
        if(A->val==B->val)  flag=DFS(A,B);
        if(!flag)           flag=isSubStructure(A->left,B);
        if(!flag)           flag=isSubStructure(A->right,B);
        return flag;
    }
};
