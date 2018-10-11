//Colin Hosking
//Work 07
//Systems pd05
//2018-10-11

struct node{int i; struct node *next;};
void print_list(struct node *n);
struct node * insert_front(struct node *n, int num);
struct node * free_list(struct node *n);