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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>st;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            st.insert(nums[i]);
        }
        ListNode* curr = head;
        if(!head) {
            return NULL;
        }
        vector<int>new_arr;
        while(curr != NULL) {
            int value = curr->val;
            if(st.find(value) == st.end()) {
                new_arr.push_back(value);
            }
            curr = curr->next;
        }

        ListNode* new_head = new ListNode(new_arr[0]);
        ListNode* temp = new_head;
        for(int i=1;i<new_arr.size();i++) {
            ListNode* new_node = new ListNode(new_arr[i]);
            temp->next = new_node;
            temp = new_node;
        } 
        return new_head;
    }
};