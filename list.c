//Colin Hosking
//Work 07
//Systems pd05
//2018-10-11

#include <stdio.h> 
#include <stdlib.h>
#include "list.h"

void print_list(struct node *n){
    struct node *x = n;
    if (!x){
        return; //if x is a NULL pointer, list is empty
    }
    while (x){
        printf("%d ",x->i);
        x = x->next;
    }
    printf("\n");
}

struct node * insert_front(struct node *n, int num){
    struct node *front = malloc(sizeof(struct node));
    front -> i = num;
    front -> next = n;
    return front;  
}

struct node * free_list(struct node *n){
    struct node *x = n;
    while (x){
        struct node *placeholder = x->next;
        free(x);
        x = placeholder;
    }
    return x;
}