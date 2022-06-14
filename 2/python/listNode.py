class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
    def toList(self):
        array_list = []
        curr = self
        
        while curr != None:
            array_list.append(curr.val)
            curr = curr.next
        
        return array_list
        
        