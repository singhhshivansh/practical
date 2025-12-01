#include <stdio.h>
#include <stdlib.h>   


struct Node {
    int value;
    struct Node *link;
};

int main() {
    
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    
    first  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));

    
    first->value = 5;
    first->link = second;

    second->value = 12;
    second->link = third;

    third->value = 25;
    third->link = NULL;

    
    struct Node *ptr = first;
    printf("Linked List Elements: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->value);
        ptr = ptr->link;
    }
    printf("NULL\n");

    return 0;
}
