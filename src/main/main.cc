#include "src/lib/solution.h"
#include "src/lib/tool.h"
#include <bits/stdc++.h>


int main() {
    Solution solution("solu1");
    solution.PrintName();
    toollib::ListNode* out;
    {
        toollib::ListNode* head = nullptr;
        toollib::InsertListHead(head, 12);
        toollib::InsertListHead(head, 13);
        toollib::InsertListHead(head, 1);
        toollib::InsertListHead(head, 2);
        toollib::InsertListHead(head, 6);
        toollib::PrintList(head);
        // free(head);
        out = head;
    }
    toollib::PrintList(out);
    free(out);
    toollib::PrintList(out);
    return EXIT_SUCCESS;
}