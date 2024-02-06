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
class FindElements {
public:
    unordered_map<int,bool> ans;
    void b(TreeNode* root,int i){
        if(root==NULL) return;
        root->val=i;
        ans[i]=true;
        b(root->left,2*i+1);
        b(root->right,2*i+2);
    }
    FindElements(TreeNode* root) {
        b(root,0);
    }
    
    bool find(int target) {
        if(ans.find(target)!=ans.end()) return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */