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
    ListNode* middleNode(ListNode* head) {
      struct ListNode* tortoise = head;
    struct ListNode* hare = head;
    while (hare != nullptr && hare->next != nullptr) {
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    return tortoise; 
    }
};