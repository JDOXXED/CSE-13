#include <stdio.h>
#include <stdlib.h>

/*Define the structure of a node in the linked list,
each node contains an integer data and a pointer to the next node in the list.
This is a linear singly linked list, where each node points to the next node in the list,
and the last node points to NULL.
*/
typedef struct node{
    int data;
    struct node* next;
} node;

typedef struct IntList{
    node* head;
    node* tail;

    int size;
}

//Iniitalizes the list
void initList(IntList* list){
    list -> head = NULL;
    list -> tail = NULL;
    list -> size = 0;
}

int main(){
    //Allocate memory to store list
    IntList* list = malloc(sizeof())

    /* Create the head of the linked list
    -------------------------------------
    Allocate memory for the head node using malloc, head is a pointer
    Assign head the value of 10
    Set the pointer to the next node to NULL, indicating that this is the last node in the list.
    */
    node *head = (node*)malloc(sizeof(node));
    head -> data = 10;
    head -> next = NULL;

    /* Create the tail of the linked list
    -------------------------------------
    Allocate memory for the tail node using malloc, tail is a pointer
    Assign tail the value of 20
    Set the pointer to the next node to NULL, indicating that this is the last node in the list.
    Assign the previous element's next as this element
    */
    node *tail = (node*)malloc(sizeof(node));
    tail -> data = 20;
    tail -> next = NULL;

    head -> next = tail;

    print("%d", head -> data);
    print("%d", tail -> data);

    //Free memory allocated
    free(head);
    free(tail);

    return 0;
}