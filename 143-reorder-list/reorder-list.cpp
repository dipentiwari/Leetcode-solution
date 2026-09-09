class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* b=slow->next;
        slow->next=NULL;
        b=reverseList(b);
        ListNode* a=head;
        ListNode* c=new ListNode(10);
        ListNode* tempC=c;
        ListNode* tempA=a;
        ListNode* tempB=b;
        while(tempA && tempB){
            tempC->next=tempA;
            tempC=tempC->next;
            tempA=tempA->next;

            tempC->next=tempB;
            tempC=tempC->next;
            tempB=tempB->next;
        }
        if(tempB==NULL) tempC->next=tempA;
        head=c->next;

        
    }
};