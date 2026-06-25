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
TreeNode* build(int i, vector<TreeNode*>& nodes){
    if(i >= nodes.size() || nodes[i] == nullptr)
        return nullptr;

    TreeNode* root = new TreeNode(nodes[i]->val);

    root->left  = build(2*i + 2, nodes); // old right
    root->right = build(2*i + 1, nodes); // old left

    return root;
}
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;

        TreeNode* temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);

        return root;
    }
};
