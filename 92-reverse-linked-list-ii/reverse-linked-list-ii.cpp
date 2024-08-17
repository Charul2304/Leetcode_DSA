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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right) return head;

        // Initialize pointers
        ListNode* prev1 = NULL;
        ListNode* curr = head;

        // Move curr to the left position and prev1 to the node before left
        for (int i = 1; i < left; i++) {
            prev1 = curr;
            curr = curr->next;
        }

        // `leftptr` points to the start of the sublist to reverse
        ListNode* leftptr = curr;
        ListNode* prev2 = NULL;

        // Reverse the sublist between left and right
        for (int i = left; i <= right; i++) {
            ListNode* next = curr->next;
            curr->next = prev2;
            prev2 = curr;
            curr = next;
        }

        // Reconnect the reversed sublist with the rest of the list
        if (prev1 != NULL) {
            prev1->next = prev2;  // Connect the node before left to the new start
        } else {
            head = prev2;  // Update head if left was 1
        }

        leftptr->next = curr;  // Connect the end of the reversed sublist to the remaining part of the list

        return head;
    }
};
