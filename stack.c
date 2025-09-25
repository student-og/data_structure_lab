#include<stdio.h>
#define size 5
int stack[size];
int top = -1;
void push(int value)
{
    if (top == size-1){
        printf("overflow");
        return;
    }
    top++;
stack[top] = value;
}
int pop (){
    if (top == -1){
        printf("underflow\n");
        return -1;
    }
    int popped = stack[top];
    top--;
    return popped;
}
void display(){
    if(top==-1){
        printf("stack is empty\n");  
        return;
    }
    printf("Stack elements are:\n");
    for (int i=top;i>=0;i--){
        printf("%d \n", stack[i]);
    }
    printf("\n");
}
int main(){
    push(10);
    push(12);
    push(13);
    display();
    pop();
    display();
    return 0;
}


