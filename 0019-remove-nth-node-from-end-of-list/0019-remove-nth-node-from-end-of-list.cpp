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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        cnt = cnt - n;
        if (cnt == 0) {
            return head->next; // Remove the head node
        }
        temp = head;
        while (cnt > 1) {
            temp = temp->next;
            cnt--;
        }
        if (temp->next != nullptr) {
            temp->next = temp->next->next;
        }
        return head;
    }
};