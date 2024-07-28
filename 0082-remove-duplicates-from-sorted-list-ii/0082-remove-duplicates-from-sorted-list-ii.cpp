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
    ListNode* deleteDuplicates(ListNode* head) {
       map<int, int> mp;
        ListNode *p = head;
        while (p) {
            mp[p->val]++;
            p = p->next;
        }
        
        ListNode *head2 = nullptr, *tail = nullptr;
        for (auto &it : mp) {
            if (it.second == 1) {
                ListNode *node = new ListNode(it.first);
                if (!head2) {
                    head2 = node;
                    tail = head2;
                } else {
                    tail->next = node;
                    tail = tail->next;
                }
            }
        }
        return head2; 
    }
};