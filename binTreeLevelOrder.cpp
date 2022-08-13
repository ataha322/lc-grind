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
    vector<vector<int>> levelOrder(TreeNode* root) { 
        if (!root) return{};
        vector<vector<int>> ret;
        traverse(root, 0, ret);
    
        return ret;
    }
    
    void traverse(TreeNode* root, int level, vector<vector<int>>& ret) {
        if (!root) return;
        
        if (ret.size() < level + 1)
            ret.push_back({});
        
        ret[level].push_back(root->val);
        traverse(root->left, level + 1, ret);
        traverse(root->right, level + 1, ret);
    }

};
