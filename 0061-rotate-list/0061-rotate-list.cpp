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
        if(head==NULL)
        {
            return head;
        }
        
        int n=1;
        ListNode *temp=head;
        while(temp->next!=NULL)
        {
            n++;
            temp=temp->next;
        }
      
        
        k=k%n;
        if(k==0)
        {
            return head;
        }
        int last=n-k;
         ListNode *temp1=head;
        for(int i=1;i<last;i++)
        {
            temp1=temp1->next;
        }
        if(temp1->next!=nullptr){
             ListNode *temp2=temp1->next;
            temp->next=head;
            temp1->next=NULL;
            head=temp2;
        }
        else{
            temp->next=head;
            head = temp;

        }
        return head;
    }

};