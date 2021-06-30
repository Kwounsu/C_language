#include <stdio.h>
#include <stdlib.h>
 
int stack[100], top = 0;
 
void push(int);
int pop();
 
int main() {
    push(1);
    push(2);
    push(3);
    printf("%d", pop());
    printf("%d", pop());
    printf("%d", pop());
}

void push(int n){
    stack[top++] = n;
}
 
int pop(){
    return stack[--top];
}
