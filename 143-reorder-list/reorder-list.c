void reorderList(struct ListNode* head){
    struct ListNode* a[50000];
    int n=0;

    while(head){
        a[n++]=head;
        head=head->next;
    }

    int l=0,r=n-1;
    while(l<r){
        a[l++]->next=a[r];
        a[r--]->next=a[l];
    }
    a[l]->next=NULL;
}