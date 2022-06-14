from addTwoNumbers import Solution
from listNode import ListNode

def main():
    # Need a mediator variable to access addTwoNumbers
    soln = Solution()

    # Test 1: 0 + 0 = 0
    list1 = ListNode(0)
    list2 = ListNode(0)
    result = soln.addTwoNumbers(list1, list2)
    assert result.toList() == [0]
        
    # Test 2: 1 + 2 = 3
    list1 = ListNode(1)
    list2 = ListNode(2)
    result = soln.addTwoNumbers(list1, list2)
    assert result.toList() == [3]
        
    # Test 3: 1 + 9 = 10
    list1 = ListNode(1)
    list2 = ListNode(9)
    result = soln.addTwoNumbers(list1, list2)
    assert result.toList() == [0, 1]
        
    # Test 4: 81 + 4218 = 4299
    list1 = ListNode(1)
    list1.next = ListNode(8)
    list2 = ListNode(8)
    list2.next = ListNode(1)
    list2.next.next = ListNode(2)
    list2.next.next.next = ListNode(4)
    result = soln.addTwoNumbers(list1, list2)
    assert result.toList() == [9, 9, 2, 4]
    
    print("PASSED ALL TESTS")
        
        
        
if __name__ == '__main__':
    main()