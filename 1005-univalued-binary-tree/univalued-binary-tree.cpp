class Solution {
private:
    void traverse(TreeNode* node, const int& value, bool& is_univalued)
    {
        if (node == nullptr || !is_univalued)
            return;
        if (node->val != value)
        {
            is_univalued = false;
            return;
        }
        traverse(node->left, value, is_univalued);
        traverse(node->right, value, is_univalued);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr)
            return false;
        const int value = root->val;
        bool is_univalued = true;
        traverse(root, value, is_univalued);
        return is_univalued;
    }
};