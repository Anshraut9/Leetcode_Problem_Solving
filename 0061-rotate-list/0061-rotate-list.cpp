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
    int get_length(ListNode* head) {
    int len = 0;
    ListNode* curr = head;
    while(curr != NULL) {
        curr = curr->next;
        len++;
    }
    return len;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || head->next == NULL) {
            return head;
        }
        ListNode* curr = head->next;
        ListNode* prev = head;
        int length = get_length(head);
        k = k % length;
        while(k) {
          while(curr->next != NULL) {
              prev = curr;
              curr = curr->next;
          } 
           curr->next = head;
           head = curr;
           prev->next = NULL;
           k--;
        }
        return head;
    }
};