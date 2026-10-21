/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        Node* x=root;
        while(x->left){
            Node* k=x;
            while(k){
                k->left->next=k->right;
                if(k->next){
                    k->right->next=k->next->left;
                }
            k=k->next;
            }
            x=x->left;
        }
        return root;
    }
};