#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int q[100];
    int front,rear,size;
}MyStack;

MyStack* myStackCreate(){
    MyStack*s=malloc(sizeof(MyStack));
    s->front=s->rear=s->size=0;
    return s;
}

void myStackPush(MyStack*s,int x){
    s->q[s->rear]=x;
    s->rear=(s->rear+1)%100;
    s->size++;
    
    for(int i=0;i<s->size-1;i++){
        s->q[s->rear]=s->q[s->front];
        s->rear=(s->rear+1)%100;
        s->front=(s->front+1)%100;
    }
}

int myStackPop(MyStack*s){
    int x=s->q[s->front];
    s->front=(s->front+1)%100;
    s->size--;
    return x;
}

int myStackTop(MyStack*s){
    return s->q[s->front];
}

bool myStackEmpty(MyStack*s){
    return s->size==0;
}

void myStackFree(MyStack*s){
    free(s);
}