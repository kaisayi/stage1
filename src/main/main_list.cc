#include <bits/stdc++.h>

#include "src/lib/tool.h"
#include "src/lib/s_list.h"

int main() {
  int vec[] = {12, 4, 66, 5, 21, 9};
  toollib::ListNode* head = toollib::CreateList(vec, sizeof(vec) / sizeof(int));
  toollib::PrintList(head);
  
  ListSolution list_sol;
  
  list_sol.RemoveNthFromEnd(head, 16);
  toollib::PrintList(head);
  return EXIT_SUCCESS;

}