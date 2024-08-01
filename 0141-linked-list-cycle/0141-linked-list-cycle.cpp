/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map< ListNode* ,int>mp;
        ListNode* temp =head;
        while(temp){
            mp[temp]++;
            temp=temp->next;
            for(auto it:mp){
            if(it.second>1){
                return true;
            }
        }
        }
        
        return false;
    }
};