#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next = nullptr;
};

struct List{
    Node*head = new Node;

    void init(){
        head->data = 0;
        head->next = nullptr;
    }
    void append(int n){
        Node*p = head;
        while(p->next) p = p->next;
        Node*tmp = new Node;
        tmp->data = n;
        p->next = tmp;
    }
    void pop(){
        if(!head->next) return;
        Node*p = head;
        while(p->next && p->next->next) p = p->next;
        Node*tmp = p->next;
        p->next = nullptr;
        delete tmp;
    }
    void print(){
        Node*p = head->next;
        while(p){
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
};

int main(){
    #ifdef _WIN32
    freopen("input.txt","r",stdin);
    #endif

    List l;
    l.init();
    l.append(10);
    l.append(20);
    l.pop();
    l.append(30);
    l.print();

    return 0;
}
