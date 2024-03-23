/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        int length = 0;
        ListNode fast = head;
        ListNode slow = head;
        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                // finding length of cycle
                do{
                    slow = slow.next;
                    length++;
                } while (slow != fast);
                break;
            }
        }
        
        if(length == 0)
        {
            return null;
        }

        ListNode first = head;
        ListNode second = head;
        while(length>0)
        {
            first = first.next;
            length--;
        }

        // To find where the cycle meet:
        while(first != second)
        {
            first = first.next;
            second = second.next;
        }
        return second;
    }
}