#include <stdlib.h>

typedef struct {
    int q[10000];
    int front,rear;
} RecentCounter;

RecentCounter* recentCounterCreate() {
    RecentCounter* r=malloc(sizeof(RecentCounter));
    r->front=r->rear=0;
    return r;
}

int recentCounterPing(RecentCounter* r,int t) {
    r->q[r->rear++]=t;
    while(r->q[r->front]<t-3000)
        r->front++;
    return r->rear-r->front;
}

void recentCounterFree(RecentCounter* r) {
    free(r);
}