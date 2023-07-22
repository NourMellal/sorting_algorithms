#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *temp;
    listint_t *i = *list;
    
    for (i = *list; i != NULL; i = i->next)
    {
        temp = i;

        while (temp->prev != NULL && temp->n < temp->prev->n)
        {
            /*Swap*/
            if (temp->next != NULL)
                temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            temp->next = temp->prev;
            temp->prev = temp->prev->prev;
            temp->next->prev = temp;

            if (temp->prev == NULL)
                *list = temp;
            else
                temp->prev->next = temp;
            print_list(*list);
        }
    }
}