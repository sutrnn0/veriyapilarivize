#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

ListNode* birlestir(ListNode* l, ListNode* l2) {
    ListNode birlestirilmis = {0}, *current = &birlestirilmis;

    while (l0 && l2) {
        if (l0->val < l2->val) {
            current->next = l0;
            l0 = l0->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    current->next = l0 ? l0 : l2;

    return birlestirilmis.next;
}

int main() {
    ListNode l0[] = {{1, &l0[1]}, {2, &l0[2]}, {4, NULL}};
    ListNode l2[] = {{1, &l2[1]}, {3, &l2[2]}, {4, NULL}};

    ListNode* birlestirilmis = birlestir(l0, l2);

    while (birlestirilmis) {
        printf("%d ", birlestirilmis->val);
        birlestirilmis = birlestirilmis->next;
    }

    return 0;
}
