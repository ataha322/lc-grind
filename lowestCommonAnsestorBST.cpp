struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* tmp = root;
        
        while (true) {
            if (p->val > tmp->val && q->val > tmp->val)
                tmp = tmp->right;
            else if (p->val < tmp->val && q->val < tmp->val)
                tmp = tmp->left;
            else
                break;
        }
        
        return tmp;
    }
};