#include <stdio.h>
#include <stdlib.h>


struct Node {
    int value;
    struct Node *next;
};

int main() {
  
    struct Node *start, *mid, *end, *fresh;

    start = (struct Node*)malloc(sizeof(struct Node));
    mid   = (struct Node*)malloc(sizeof(struct Node));
    end   = (struct Node*)malloc(sizeof(struct Node));

    start->value = 10;
    start->next = mid;

    mid->value = 30;
    mid->next = end;

    end->value = 50;
    end->next = NULL;

    
    fresh = (struct Node*)malloc(sizeof(struct Node));
    fresh->value = 20;

   
    fresh->next = mid;
    start->next = fresh;

    
    struct Node *scan = start;
    printf("List After Insertion: ");
    while (scan != NULL) {
        printf("%d -> ", scan->value);
        scan = scan->next;
    }
    printf("NULL\n");

    return 0;
}
