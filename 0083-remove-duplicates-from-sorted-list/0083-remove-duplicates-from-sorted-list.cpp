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
 #include<set>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         std::set<int> st;
    ListNode* curr = head;

    // Traverse the list and insert values into the set
    while (curr) {
        st.insert(curr->val);
        curr = curr->next;
    }

    // Create a new dummy node to start the new list
    ListNode* dummy = new ListNode(-1);
    curr = dummy;

    // Insert the unique values from the set into the new list
    for (auto it : st) {
        ListNode* newNode = new ListNode(it);
        curr->next = newNode;
        curr = newNode;
    }

    // Return the head of the new list
    return dummy->next;
    }
};