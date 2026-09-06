class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A=headA;
        ListNode* B=headB;
        int lenA=0;
        while(A!=NULL){
            lenA++;
            A=A->next;
        }
        int lenB=0;
        while(B!=NULL){
            lenB++;
            B=B->next;
        }
        A=headA;
        B=headB;
        if(lenA>lenB){
            int diff= lenA-lenB;
            for(int i=1;i<=diff;i++){
                A=A->next; 
            }
            while(A!=B){
                A=A->next;
                B=B->next;
            }
            return A;
        }
        else{
            int diff= lenB-lenA;
            for(int i=1;i<=diff;i++){
                B=B->next; 
            }
            while(A!=B){
                A=A->next;
                B=B->next;
            }
            return B;
        }

        }
    
};