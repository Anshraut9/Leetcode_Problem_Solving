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
    ListNode* reverse_ll(ListNode* first, ListNode* second) {
        ListNode* prev = NULL;
        ListNode* curr = first;
        ListNode* next_node = NULL;
        while (curr != second) {
            next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) {
            return head;
        }

        ListNode* before_left = NULL;
        ListNode* after_right = NULL;
        ListNode* curr = head;
        int pos = 1;

        while (pos < left - 1 && curr != NULL) {
            curr = curr->next;
            pos++;
        }

        if (left > 1)
            before_left = curr;

        ListNode* left_node = (left == 1) ? head : curr->next;

        curr = left_node;
        for (int i = left; i < right && curr != NULL; i++) {
            curr = curr->next;
        }

        after_right = curr->next;

        ListNode* rev_head = reverse_ll(left_node, after_right);

        if (before_left != NULL)
            before_left->next = rev_head;
        else
            head = rev_head; 

        left_node->next = after_right;

        return head;
    }
};