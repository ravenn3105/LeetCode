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
int sum(TreeNode * root, int pathsum){
    if (!root){return 0;}
    
        pathsum = pathsum*10+ root->val;

        if (root->left ==NULL && root->right==NULL){
            return pathsum;
        }
        return sum(root->left, pathsum) + sum(root->right, pathsum);
    
}
    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
};