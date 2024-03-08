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
    int val= 0, maxlevel=0;
    void check(TreeNode* root, int level){
        if (level> maxlevel){
            val= root->val;
            maxlevel=level;
        }
        if (root->left==NULL && root->right==NULL){ return;}
        if(root->left){
            check(root->left, level+1);
        }if (root->right){
            check(root->right, level+1);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        if (root->left==NULL && root->right== NULL){ return root->val;}
        check(root, 0);
        return val;
    }
};