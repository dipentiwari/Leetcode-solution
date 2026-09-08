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
        ListNode* curr=head,*prev=NULL,*Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* c=new ListNode(10);
        ListNode* temp=head;
        ListNode* tempc=c;
        while(temp){
            ListNode* node=new ListNode(temp->val);
            tempc->next=node;
            temp=temp->next;
            tempc=tempc->next;
        }   
        c=c->next;
        c=reverseList(c);
        ListNode* a=head;
        while(a){
            if(a->val!=c->val) return false;
            a=a->next;
            c=c->next;
        }
        return true;

    }
};