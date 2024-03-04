class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || k == 0) return head;
        
        int size = 1;
        ListNode temp = head;
        while (temp.next != null) {
            size++;
            temp = temp.next;
        }
        temp.next = head;
        
        int stepsToNewHead = size - (k % size);
        for (int i = 0; i < stepsToNewHead; i++) {
            temp = temp.next;
        }
        
        ListNode newHead = temp.next;
        temp.next = null;
        
        return newHead;
    }
}