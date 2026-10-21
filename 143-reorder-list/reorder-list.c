void reorderList(struct ListNode* head){
    struct ListNode* a[50000];
    int n=0;

    for(struct ListNode* p=head;p;p=p->next)
        a[n++]=p;

    int l=0,r=n-1;
    while(l<r){
        a[l]->next=a[r];
        l++;
        if(l==r)break;
        a[r]->next=a[l];
        r--;
    }
    a[l]->next=NULL;
}