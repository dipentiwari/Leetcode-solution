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
    ListNode* oddEvenList(ListNode* head) {

        ListNode* temp=head;
        ListNode* low=new ListNode(10);
        ListNode* high=new ListNode(20);
        ListNode* odd=low;
        ListNode* even=high;
        if(head==NULL || head->next==NULL) return head;
        int i=1;
        while(temp!=NULL){
            if(i%2!=0){
                odd->next=temp;
                odd=odd->next;
                temp=temp->next;
    
            }
            else{
                even->next=temp;
                even=even->next;
                temp=temp->next;
            }
            i++;
        }
            even->next=NULL;
            odd->next=high->next;

            return low->next;


    }
};