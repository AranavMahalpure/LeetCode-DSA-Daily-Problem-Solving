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
 int maxx(TreeNode* root, int &maxi) {
    if (root == nullptr) {
        return 0;
    }

    // Compute the maximum path sum starting from the left and right children
    int leftsum = max(0, maxx(root->left, maxi)); // Only add positive contributions
    int rightsum = max(0, maxx(root->right, maxi)); // Only add positive contributions

    // Compute the maximum path sum with the current node as the highest node
    int currentMax = root->val + leftsum + rightsum;

    // Update the global maximum
    maxi = max(maxi, currentMax);

    // Return the maximum path sum including the current node and one of its children
    return root->val + max(leftsum, rightsum);
}

int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN; // Initialize maxi with a very small value
    maxx(root, maxi);
    return maxi;
}
};