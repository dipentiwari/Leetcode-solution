/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {// create a cope
        Node* dummy=new Node(0);
        Node* tempc=dummy;
        Node* temp=head;
        while(temp){
            Node* a=new Node(temp->val);
            tempc->next=a;
            tempc=tempc->next;
            temp=temp->next;
        }
        Node* b=dummy->next;
        Node* a=head;
        // map fill
        unordered_map<Node*,Node*> mp;
        Node* tempa=a;
        Node* tempb=b;
        while(tempa){
            mp[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;  
        }

        for(auto x:mp){
            Node* o=x.first;
            Node* d=x.second;
            if(o->random!=NULL){
                Node* oRandom=o->random;
                Node* dRandom=mp[o->random];
                d->random=dRandom;
            }
        }
        return b;
    }
};