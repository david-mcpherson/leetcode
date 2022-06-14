from listNode import ListNode

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode()
        curr = head
        overflow = False
        
        # Continuously add new digits to the list
        while l1 != None or l2 != None or overflow:
            next_digit = int(overflow)
            overflow = False
            
            if l1 != None:
                next_digit += l1.val
                l1 = l1.next
                
            if l2 != None:
                next_digit += l2.val
                l2 = l2.next
            
            if next_digit >= 10:
                overflow = True
                next_digit %= 10
            
            curr.next = ListNode(next_digit)
            curr = curr.next
        
        return head.next
    