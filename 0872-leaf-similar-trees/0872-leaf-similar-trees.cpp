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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> List1, List2;
        Nodevalue(root1, List1);
        Nodevalue(root2, List2);
        return List1==List2;
    }
    void Nodevalue(TreeNode* root, vector<int>& List){
        if (root==NULL){
            return ;}
        if( root->left==NULL && root->right==NULL){
            List.push_back(root->val);
            return;
        }
        Nodevalue(root->left, List);
        Nodevalue(root->right, List);

        
    }
};