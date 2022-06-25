#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        
        int heightDiff = TreeHeight(root->left) - TreeHeight(root->right);
        if (heightDiff < -1 || heightDiff > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
    
    
    int TreeHeight(TreeNode* node) {
        if (node == nullptr)
            return 0;

        return std::max(TreeHeight(node->left), TreeHeight(node->right)) + 1;
    }
    
};
