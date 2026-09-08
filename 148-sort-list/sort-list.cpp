class Solution {
public:
    ListNode* merge(ListNode*a, ListNode*b){
        ListNode* C=new ListNode(100);
        ListNode* tempC=C;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tempC->next=a;
                a=a->next;
                tempC=tempC->next;
            }
            else{
                tempC->next=b;
                b=b->next;
                tempC=tempC->next;
            }
        }
            if(a==NULL) tempC->next=b;
            if(b==NULL) tempC->next=a;
            return C->next;
    }


    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*a =head;
        ListNode* b=slow->next;
        slow->next=NULL;
        a=sortList(a);
        b=sortList(b);
        ListNode* c=merge(a,b);
        return c;

    }
};