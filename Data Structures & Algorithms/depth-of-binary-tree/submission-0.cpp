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
int solve(TreeNode* root){
    if(root==nullptr)return 0;
    int nodeleft=solve(root->left);
    int noderight=solve(root->right);
    return 1+max(nodeleft,noderight);
}
    int maxDepth(TreeNode* root) {
        return solve(root);
    }
};
