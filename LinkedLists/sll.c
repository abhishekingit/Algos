#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int val;
    struct node *next;

};

struct node *head;
struct node *curr;

struct node* addNode(int n) {
    if(NULL == head) {
        head = (struct node*)malloc(sizeof(struct node));
        head->val = n;
        head->next = NULL;
        curr = head;
        return curr;

    } else {
        printf("Adding node to end of the list\n");
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
        if(ptr == NULL) {
            printf("Node creation failed\n");
            return NULL;

        }
        ptr->val = n;
        ptr->next = NULL;

        curr->next = ptr;
        curr = ptr;
        return curr;
        
    }
}

void displaynodes() {
    if(head == NULL) {
        printf("Linked list is empty");

    } else {
        curr = head;
        while(curr != NULL) {
            printf("%d\t", curr->val);
            curr = curr -> next;

        }
        printf("\n");

    }
}




int main() {
    head = NULL;
    curr = NULL;
    int n;
    int value;
    while (1)
    {   
        printf("1.AddNodes\n2.DisplayNodes\n3.Exit\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter the value for the node\n");
            scanf("%d", &value);
            curr = addNode(value);
            break;

        case 2:
            printf("Displaying all the nodes\n");
            displaynodes();
            break;

        case 3:
            printf("EXIT\n");
            exit(0);
            break;
        
        default:
            printf("No option for the given input");
            break;
        }
    }
    



}