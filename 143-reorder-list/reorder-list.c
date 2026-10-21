struct ListNode* reverse(struct ListNode* head){
    struct ListNode *prev=NULL,*next;
    while(head){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}

void reorderList(struct ListNode* head){
    if(!head||!head->next)return;

    struct ListNode *slow=head,*fast=head;
    while(fast->next&&fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    struct ListNode* second=reverse(slow->next);
    slow->next=NULL;

    while(second){
        struct ListNode* x=head->next;
        struct ListNode* y=second->next;
        head->next=second;
        second->next=x;
        head=x;
        second=y;
    }
}