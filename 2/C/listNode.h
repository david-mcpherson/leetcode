#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* createList(unsigned long int num) {
    struct ListNode* new_list = malloc(sizeof(struct ListNode));
    new_list->val = num % 10;

    if (num < 10) {
        new_list->next = NULL;
    } else {
        new_list->next = createList(num / 10);
    }
    return new_list;
}


void destroyList(struct ListNode* zombie_list) {
    struct ListNode* next_node = zombie_list->next;
    free(zombie_list);
    if (next_node != NULL)
        destroyList(next_node);
}


void printList(struct ListNode* list) {
    printf("%d ", list->val);
    if (list->next == NULL)
        printf("\n");
    else
        printList(list->next);
}

