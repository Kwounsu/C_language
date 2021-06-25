#include<stdio.h>

void input(int *a){
    scanf("%d", a);
}

void main(){
    int a;
    input(&a);
}
