
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *prev = &dummy;
    struct ListNode *curr, *next;
    int i;

    for (i = 1; i < left; i++)
        prev = prev->next;

    curr = prev->next;

    for (i = 0; i < right - left; i++) {
        next = curr->next;
        curr->next = next->next;
        next->next = prev->next;
        prev->next = next;
    }

    return dummy.next;
}
