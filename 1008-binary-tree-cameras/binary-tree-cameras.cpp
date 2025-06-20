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
    int camera=0;
public:
    int dfs(TreeNode * node){
        if (node==NULL){return 1;}

        int left= dfs(node->left);
        int right= dfs(node->right);

        if (left==-1 || right==-1){ 
            camera ++;
            return 0;}

        if (left==0 || right==0){return 1;}

        return -1;

    }
    int minCameraCover(TreeNode* root) {
        if (dfs(root)==-1){
            camera++;
            return camera;
        }
        return camera;
    }
};