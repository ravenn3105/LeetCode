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
    bool validate(TreeNode* root, TreeNode* min, TreeNode* max){
        if (root==NULL){
            return true;
        }

        if(min!= NULL && min->val>= root->val){
            return false;
        }
        if(max!= NULL && max->val<= root->val){
            return false;
        }
        return validate(root->left, min, root) && validate(root->right, root, max);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root, NULL,NULL);
    }
};