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
    ListNode* sortList(ListNode* head) {
        vector<int> sortable;

        ListNode *temp = head;
        while (temp != nullptr) {
            sortable.push_back(temp -> val);
            temp = temp -> next;
        }

        sort(sortable.begin(), sortable.end());

        temp = head;
        int i = 0;
        while (temp != nullptr) {
            temp -> val = sortable[i++];
            temp = temp -> next;
        }

        return head;}
};