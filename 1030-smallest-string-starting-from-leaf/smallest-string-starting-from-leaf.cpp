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
string ans="";
void solve(TreeNode * root, string curr){
    
    if (!root->left && !root->right){
        curr+= (root->val+'a');
        reverse(curr.begin(), curr.end());
        if (curr.size()>0 && ans> curr){
            ans=curr;
        }
        reverse(curr.begin(), curr.end());
        
    }
    curr+= root->val+'a';
    if (root->left){ solve(root->left, curr);}
    if (root->right){ solve(root->right, curr);}
}
    string smallestFromLeaf(TreeNode* root) {
        ans=string(1, 'z'+1);
        solve(root, "");
        return ans;
    }
};