#include <stdlib.h>
#include <string.h>

char** uncommonFromSentences(char* s1,char* s2,int* returnSize){
    char *a[400],*p;
    int c[400]={0},n=0;

    p=strtok(s1," ");
    while(p){
        int i;
        for(i=0;i<n&&strcmp(a[i],p);i++);
        if(i==n)a[n++]=p;
        c[i]++;
        p=strtok(NULL," ");
    }

    p=strtok(s2," ");
    while(p){
        int i;
        for(i=0;i<n&&strcmp(a[i],p);i++);
        if(i==n)a[n++]=p;
        c[i]++;
        p=strtok(NULL," ");
    }

    char **ans=malloc(n*sizeof(char*));
    *returnSize=0;

    for(int i=0;i<n;i++)
        if(c[i]==1)
            ans[(*returnSize)++]=a[i];

    return ans;
}