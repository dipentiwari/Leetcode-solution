class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* low=new ListNode(10);
        ListNode* high=new ListNode(100);
        ListNode* templo=low;
        ListNode* temphi=high;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                templo->next=temp;
                temp=temp->next;
                templo=templo->next;
            }
            else{
                temphi->next=temp;
                temp=temp->next;
                temphi=temphi->next;
            }
        }
        templo->next=high->next;
        temphi->next=NULL;
        return low->next;



        
    }
};