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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode* tempA=a;
        ListNode* tempB=b;
        ListNode* C= new ListNode(100);
        ListNode* tempC= C;
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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a=arr[arr.size()-1];
            arr.pop_back();
            ListNode* b=arr[arr.size()-1];
            arr.pop_back();   
            ListNode* C=merge(a,b);
            arr.push_back(C);
        }
        return arr[0];
    }
};