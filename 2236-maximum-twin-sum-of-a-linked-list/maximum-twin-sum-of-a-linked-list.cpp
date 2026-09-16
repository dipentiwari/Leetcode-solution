class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow;
        head2 = reverseList(head2);
        int ans = 0;
        ListNode* first = head;
        ListNode* second = head2;
        while (second != NULL) {
            ans = max(ans, (first->val)+(second->val));
            first = first->next;
            second = second->next;
        }


        return ans;


    }
};