/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int data;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> s;
       struct ListNode* temp =head;
       while(temp!=nullptr){
          s.push(temp->val);
          temp= temp->next;
       }
       temp =head;
       while(temp!=nullptr){
        temp->val= s.top();
        s.pop();
        temp=temp->next;
       }
       delete temp;
       return head;
       
    }
};