/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                int count = 0;
                slow = head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                    count++;
                }
                return slow;
            }
        }
        return NULL;
    }
};