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
    ListNode* swapNodes(ListNode* head, int k) {
        if (!head) return head;

        ListNode* first = head;
        ListNode* second = head;
        ListNode* temp = head;

        // Move first pointer to the kth node from the beginning
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Move temp to the end to calculate the length of the list
        while (temp->next != nullptr) {
            temp = temp->next;
            if (k-- <= 1) {
                second = second->next;
            }
        }

        // Swap the values of the first and second nodes
        int tempVal = first->val;
        first->val = second->val;
        second->val = tempVal;

        return head;
    }
};
