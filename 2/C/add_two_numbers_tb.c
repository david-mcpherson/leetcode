#include "add_two_numbers.c"

int main() {
    struct ListNode *list1, *list2, *result;
    
    // // test 0: list constructor
    // struct ListNode* constructor_test = createList(10);
    // printList(constructor_test);
    // printf("%d\n", listToInt(constructor_test));
    // destroyList(constructor_test);
    
    // test 1 -- 342 + 456 = 807: [2 4 3] [5 6 4]  -->  [7 0 8]
    list1 = createList(342);
    list2 = createList(465);
    result = addTwoNumbers(list1, list2);
    printf("\nTEST 1\nExpected result: 7 0 8\nActual result:   ");
    printList(result);      
    destroyList(list1);
    destroyList(list2);
    destroyList(result);
    
    
    // test 2 -- 0 + 0 = 0: [0] [0]  -->  [0]
    list1 = createList(0);
    result = addTwoNumbers(list1, list1);
    printf("\nTEST 2\nExpected result: 0\nActual result:   ");
    printList(result);      
    destroyList(list1);
    destroyList(result);
    
    
    // test 3 -- 9 999 999 + 9 999 = 1 0 0 0 9 9 9 8: [9 9 9 9 9 9 9] [9 9 9 9]  -->  [8 9 9 9 0 0 0 1]
    list1 = createList(9999999);
    list2 = createList(9999);
    result = addTwoNumbers(list1, list2);
    printf("\nTEST 3\nExpected result: 8 9 9 9 0 0 0 1\nActual result:   ");
    printList(result);      
    destroyList(list1);
    destroyList(list2);
    destroyList(result);
 
}