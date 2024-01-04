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
    int minDepth(TreeNode* root) {
        int count=1;
        return solve(root, count);
    }
    int solve(TreeNode * root, int count){
        if(!root)
        return 0;
        if (root->left==NULL && root->right!=NULL){
            return solve(root->right, count+1);
        }
        if (root->left!=NULL && root->right==NULL){
            return solve(root->left, count+1);
        }
        if (root->left==NULL && root->right==NULL){
            return count;
        }
        else{
        return min(solve(root->right,count+1),solve(root->left,count+1));}
}

    
};