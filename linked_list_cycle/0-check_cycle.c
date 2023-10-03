#include "lists.h"
int check_cycle(listint_t *list){
    /**
     * Write a function in C that checks if
     * a singly linked list has a cycle in it.
     *
     * Return: 0 if there is no cycle, 1 if there is a cycle
     */
    listint_t *slow = list, *fast = list;
    while (slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return (1);
    }
    return (0);
}