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
//    void inorder(TreeNode* Node,vector<int>&ans){
//      if(Node==nullptr){
//         return ;
//      }
 
//      inorder(Node->left,ans);
//     ans.push_back(Node->val);
//     inorder(Node->right,ans);
//    }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         inorder(root,ans);
//         return ans;
//     }
 vector<int> inorderTraversal(TreeNode* root) {
 vector<int> ans;
    stack<TreeNode*> st;
    TreeNode* current = root;

    while (current != nullptr || !st.empty()) {
        // Reach the leftmost node of the current node
        while (current != nullptr) {
            st.push(current);
            current = current->left;
        }

        // Current must be nullptr at this point
        current = st.top();
        st.pop();
        ans.push_back(current->val); // Process the node

        // Visit the right subtree
        current = current->right;
    }

    return ans;
 }
};