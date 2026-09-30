#include <stdlib.h>

typedef struct {
    int stack[30000];
    int min[30000];
    int top;
} MinStack;

MinStack* minStackCreate() {
    MinStack* s=malloc(sizeof(MinStack));
    s->top=0;
    return s;
}

void minStackPush(MinStack* s,int val) {
    s->stack[s->top]=val;

    if(s->top==0)
        s->min[s->top]=val;
    else
        s->min[s->top]=val<s->min[s->top-1]?val:s->min[s->top-1];

    s->top++;
}

void minStackPop(MinStack* s) {
    s->top--;
}

int minStackTop(MinStack* s) {
    return s->stack[s->top-1];
}

int minStackGetMin(MinStack* s) {
    return s->min[s->top-1];
}

void minStackFree(MinStack* s) {
    free(s);
}