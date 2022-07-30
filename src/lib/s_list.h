#include "tool.h"

class ListSolution {
public:
    void RemoveNthFromEnd(toollib::ListNode*& head, int n) {
        toollib::ListNode* cur = head;
        while (cur) {
            n--;
            cur = cur->next;
        }
        if (n == 0) {
            head = head->next;
        }
        if (n >= 0) return;
        cur = head;
        while (++n < 0) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
    }

};