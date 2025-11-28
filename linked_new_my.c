#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;// self referencing structure
};
int main(){
    struct node *current=NULL;
    struct node *head=NULL;
    struct node *temp=NULL;
    int i,num;

    current = (struct node*)malloc(sizeof(struct node));
    current->data=10;
    current->next=NULL;
    head = current;
    // Append nodes at the END
   for(i=1;i<=5;i++){
     temp = (struct node*)malloc(sizeof(struct node));
     printf("Enter %d number:\n",i);
     scanf("%d",&num);
     temp->data=num;
     temp->next=NULL;
     current->next=temp;
     current=temp;
   }

    // Print the list
    printf("Number are:\n");
    current = head;
    while (current != NULL) {
        printf("%d", current->data);
        printf("\n");
        current = current->next;
    }
    printf("NULL\n");

     // Free memory
    current = head;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}