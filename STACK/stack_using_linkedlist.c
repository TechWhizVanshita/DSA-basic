#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top;

void push(int );
void pop();
void display();

int main(){
     int choice,element;
     
     while(1){
        printf("\n\nPress\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
              printf("Enter element to be pushed: ");
              scanf("%d",&element);
              push(element);
              break;

            case 2:
              pop();
              break;

            case 3:
              display();
              break;

            case 0:
              exit(0);

            default:
              printf("Wrong choice... Write the choice between(0-3)");
        }
     }

    return 0;
}


void push(int element){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node *));

    temp->data = element;
    temp->next = NULL;
    
    if(temp==NULL){
       printf("STACK OVERFLOW!!!!");
    }

    if(top==NULL){
        top=temp;
    }

    else{
        temp->next = top;
        top = temp;
    }
}

void pop(){
    struct node *ptr;
    if(top==NULL){
        printf("\n STACK UNDERFLOW !!!");
    }

    else{
        ptr=top;
        printf("popped data = %d",top->data);
        top = top->next;

        // free(ptr); //Here we use ptr not top, because if we use top and free it then error arise data of top became free..... to remove this, we use another pointer variable ptr in which we make a copy of top to free it.
    }
}


void display(){
    struct node *ptr;
    ptr = top; //Here we use ptr because if we go the next pointer to display the next value of stack using linked list then and using top it goes at the end of stack and if user wants to push another element into stack then it will become a problem....
    if(top==NULL){
        printf("\nSTACK IS EMPTY....\n");
    }

    else{
        printf("\nSTACK ELEMENTS ARE: \n");

        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}