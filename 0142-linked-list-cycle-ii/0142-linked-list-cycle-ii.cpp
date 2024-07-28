/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 #include<unordered_map>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    unordered_map<ListNode*, bool> hmap;
    ListNode* temp = head;
    while (temp != nullptr) {
        if (hmap.find(temp) != hmap.end()) {
            return temp; // Cycle detected, return the start of the cycle
        }
        hmap[temp] = true; // Mark node as visited
        temp = temp->next;
    }
    return nullptr;
    }
};