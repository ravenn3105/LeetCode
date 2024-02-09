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
    bool traversal( TreeNode * root, int value){
        if (root==NULL){return true ;}
        if ((root->val!=value)){
            return false;
        }
        return (traversal(root->left, value) && traversal(root->right, value));
    }
    bool isUnivalTree(TreeNode* root) {
        
        if(root == nullptr) return true;
        const int value= root->val;
        return traversal(root, value);
        
    }

};