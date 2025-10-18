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
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* curr2 = new ListNode(0);
        ListNode* new_head = curr2;
        while(curr) {
            int num = curr->val;
            num*=2;
            if(num > 9) {
                ListNode* new_node = new ListNode(num % 10);
                curr2->val += 1;
                curr2->next = new_node;
                curr2 = curr2->next;
            } else {
                ListNode* new_node = new ListNode(num);
                curr2->next = new_node;
                curr2 = curr2->next;
            }
            curr = curr->next;
        }

        if(new_head->val == 0) {
           return new_head->next;
        } else {
            return new_head;
        }
    }
};