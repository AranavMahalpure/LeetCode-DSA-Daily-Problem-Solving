/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       set<int> st(nums.begin(), nums.end()); // Create a set from the vector
    ListNode* curr = head;
    ListNode* prev = nullptr;

    while (curr != nullptr) {
        if (st.find(curr->val) != st.end()) {
            // Value is in the set, remove the node
            if (prev == nullptr) {
                // Removing the head node
                head = curr->next;
            } else {
                prev->next = curr->next;
            }
            delete curr; // Free the memory
            curr = prev ? prev->next : head; // Update current node
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
    }
};