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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0, head);
    ListNode* fast = dummy;
    ListNode* slow = dummy;

    // Step 1: advance fast by n nodes (create the gap)
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // Step 2: move both until fast reaches the LAST node
    while (fast->next != nullptr) {   // ← note: fast->next, not fast
        fast = fast->next;
        slow = slow->next;
    }

    // Step 3: slow is now just before the target — splice it out
    slow->next = slow->next->next;

    return dummy->next;
}
};
