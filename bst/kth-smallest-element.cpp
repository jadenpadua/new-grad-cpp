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
    int dfs(TreeNode* root, int &k) {
        if (!root) {
            return 0;
        }
        int left = dfs(root->left, k);
        // if left returns a non zero value (found kth smallest)
        if(left) {
            return left;
        }
        k -= 1;
        if (k==0) {
            return root->val;
        }
        int right = dfs(root->right, k);
        return right;
    }
    int kthSmallest(TreeNode* root, int k) {
        return dfs(root,k);
    }
};
