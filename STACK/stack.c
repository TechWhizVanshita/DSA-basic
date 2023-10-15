#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void push(int );
void pop();
void display();

int top = -1;
int stack[MAX];


int main(){
   int choice,element;
   while(1)
   {
    printf("\nPress \n1:push \n2:pop \n3:display\n0:Exit \n");
    printf("Enter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
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
            printf("Wrong choice... Use only above options");
    }
   }
   return 0;
}

void push(int element) {
     if (top == MAX-1){
        printf("\nSTACK OVERFLOW !!!!\n");
     }

     else{
        top = top + 1;
        stack[top] = element;
     }
   }

void pop(){
    if(top == -1){
        printf("\n STACK UNDERFLOW !!!!!\n");
    }

    else{
        printf("\nPopped element = %d",stack[top]);
        top = top-1;
    }
}

void display(){
    int i;
    if(top == -1){
        printf("\nSTACK IS EMPTY\n");
    }

    else{
        for(i=top; i>=0 ; i--){
            printf("%d\t",stack[i]);
        }
    }
}

