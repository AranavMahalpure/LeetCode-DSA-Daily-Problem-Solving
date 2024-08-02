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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
        return head; // If the list is empty, has only one node, or no rotation needed
    }

    // Step 1: Find the length of the list and make it circular
    int n = 1; // Start with 1 because we're already at head
    ListNode* temp = head;
    while (temp->next) {
        n++;
        temp = temp->next;
    }
    temp->next = head; // Make the list circular

    // Step 2: Calculate the effective rotations needed
    k = k % n;
    if (k == 0) {
        temp->next = nullptr; // Break the circle
        return head; // No rotation needed
    }

    // Step 3: Find the new head and tail after rotation
    int stepsToNewHead = n - k;
    ListNode* newTail = head;
    for (int i = 1; i < stepsToNewHead; i++) {
        newTail = newTail->next;
    }

    ListNode* newHead = newTail->next; // The new head after rotation
    newTail->next = nullptr; // Break the circle

    return newHead;
    }

};