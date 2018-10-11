//Colin Hosking
//Work 07
//Systems pd05
//2018-10-11

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "list.h"

int main(){
    srand(time(NULL));
    
    struct node *n1 = 0;
    
    printf("Empty list:\n");
    print_list(n1);
    
    struct node *n5 = insert_front(0,rand()%50);
    printf("List of 1 ints:\n");
    print_list(n5);
    struct node *n4 = insert_front(n5,rand()%50);
    printf("List of 2 ints:\n");
    print_list(n4);
    struct node *n3 = insert_front(n4,rand()%50);
    printf("List of 3 ints:\n");
    print_list(n3);
    struct node *n2 = insert_front(n3,rand()%50);
    printf("List of 4 ints:\n");
    print_list(n2);
    n1 = insert_front(n2,rand()%50);
    
    printf("List of 5 ints:\n");
    print_list(n1);
    
    printf("free list, and print result:\n");
    print_list(free_list(n1));
    
}