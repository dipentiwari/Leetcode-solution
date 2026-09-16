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
    ListNode* reverseList(ListNode* head){
        ListNode*curr=head;
        ListNode* prev=NULL;
        ListNode* Next=NULL;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b=slow->next;
        slow->next=NULL;
        b=reverseList(b);
        ListNode* c=new ListNode(10);
        ListNode* tempA=a;
        ListNode* tempB=b;
        ListNode* tempC=c;
        while(tempA!=NULL && tempB!=NULL){
            tempC->next=tempA;
            tempA=tempA->next;
            tempC=tempC->next;

            tempC->next=tempB;
            tempB=tempB->next;
            tempC=tempC->next;
        }
        if(tempB==NULL) tempC->next=tempA;

        head=c->next;
        
        
    }
};















