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
// void preOrder(TreeNode* root,vector<int>& ans){
//         if(root==NULL) return;
//         ans.push_back(root->val);
//         preOrder(root->left,ans);
//         preOrder(root->right,ans);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         preOrder(root,ans);
//         return ans;
//     }
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (root == nullptr) return ans;
    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
        TreeNode* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if (temp->right) {
            st.push(temp->right);
        }
        if (temp->left) {
            st.push(temp->left);
        }
    }
    return ans;
}
};