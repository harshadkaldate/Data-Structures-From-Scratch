char** findRelativeRanks(int* score,int n,int* returnSize){
    char** ans=malloc(n*sizeof(char*));
    *returnSize=n;

    for(int i=0;i<n;i++){
        int rank=1;
        for(int j=0;j<n;j++)
            if(score[j]>score[i])rank++;

        ans[i]=malloc(20);
        if(rank==1)strcpy(ans[i],"Gold Medal");
        else if(rank==2)strcpy(ans[i],"Silver Medal");
        else if(rank==3)strcpy(ans[i],"Bronze Medal");
        else sprintf(ans[i],"%d",rank);
    }
    return ans;
}