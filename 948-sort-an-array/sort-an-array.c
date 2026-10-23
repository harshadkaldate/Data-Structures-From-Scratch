void merge(int* a,int l,int m,int r,int* t){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r){
        if(a[i]<=a[j])t[k++]=a[i++];
        else t[k++]=a[j++];
    }
    while(i<=m)t[k++]=a[i++];
    while(j<=r)t[k++]=a[j++];
    for(i=l;i<=r;i++)a[i]=t[i];
}

void ms(int* a,int l,int r,int* t){
    if(l>=r)return;
    int m=l+(r-l)/2;
    ms(a,l,m,t);
    ms(a,m+1,r,t);
    merge(a,l,m,r,t);
}

int* sortArray(int* nums,int n,int* returnSize){
    int* t=malloc(n*sizeof(int));
    *returnSize=n;
    ms(nums,0,n-1,t);
    free(t);
    return nums;
}