#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if (!head){
        return 0;
    }
    node *n1 = head;
    node *n2 = head;
    while(n2->next&&n2->next->next){
        n1 = n1 -> next;
        n2 = n2 -> next -> next;
        if(n1==n2){
            return 1;
        }
    }
    return 0;
}
