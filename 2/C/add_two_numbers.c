#include "listNode.h"

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Need to save the head pointer and copy it to curr_node
    struct ListNode* head = malloc(sizeof(struct ListNode));
    struct ListNode* curr_node = head;
    unsigned int next_digit, overflow;
    overflow = 0;
    
    // Each iteration adds a node to the list
    while (l1 || l2 || overflow) {
        curr_node->next = malloc(sizeof(struct ListNode));
        curr_node = curr_node->next;
        
        next_digit = overflow;
        overflow = 0;
        
        if (l1) {
            next_digit += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            next_digit += l2->val;
            l2 = l2->next;
        }
        
        if (next_digit >= 10) {
            next_digit = next_digit % 10;
            overflow = 1;
        }

        curr_node->val = next_digit;
        curr_node->next = NULL;
    }
    
    // drop head
    curr_node = head->next;
    free(head);
    return curr_node;
}