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
    bool isPalindrome(ListNode* head) {
    stack<int> s;
       struct ListNode* temp =head;
       while(temp!=nullptr){
          s.push(temp->val);
          temp= temp->next;
       }
       temp =head;
       while(temp!=nullptr){if(temp->val!=s.top()){ return 0;}
        s.pop();
        temp=temp->next;
       }
      return 1;
       
    }
};