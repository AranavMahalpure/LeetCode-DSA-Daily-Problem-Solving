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
  struct ListNode* head;
    Solution(ListNode* head) {
        this->head = head;
        std::srand(std::time(nullptr)); // Seed the random number generator
    }
    
    // Returns a random node's value from the linked list
    int getRandom() {
        int result = head->val; // Start with the first value
        ListNode* current = head->next;
        int n = 2; // Start counting from the second node
        
        while (current != nullptr) {
            if (std::rand() % n == 0) {
                result = current->val; // Replace result with the current node's value with probability 1/n
            }
            current = current->next;
            n++;
        }
        
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */