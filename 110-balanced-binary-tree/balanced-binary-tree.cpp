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
int dfs(TreeNode* root){
    if (root==NULL){
        return 0;
    }
    int left= dfs(root->left);
    int right= dfs(root->right);
    return max(left,right)+1;
}
    bool isBalanced(TreeNode* root) {
        if (root==NULL){
            return true;
        }
        int leftSub= dfs(root->left);
        int rightSub= dfs(root->right);
        if(abs(leftSub-rightSub)>1){
            return false;
        }
        return (isBalanced(root->left) && isBalanced(root->right));
    }
};
