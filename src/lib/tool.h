#pragma once

#include <bits/stdc++.h>

namespace toollib {

struct ListNode {
//   typedef std::unique_ptr<ListNode> ListNodePtr;
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

template <typename T>
void PrintVector(std::vector<T> nums) {
  auto size = nums.size();
  for (size_t i = 0; i < size; i++) {
    if (i) putchar(' ');
    std::cout << nums[i];
  }
  putchar('\n');
}

template <typename T>
void PrintMatrix(std::vector<std::vector<T>> matrix) {
  size_t row = 0, col = 0;
  row = matrix.size();
  if (row) col = matrix[0].size();
  for (size_t i = 0; i < row; i++) {
    for (size_t j = 0; j < col; j++) {
      if (j) putchar(' ');
      std::cout << matrix[i][j];
    }
    putchar('\n');
  }
}

void InsertListHead(ListNode *&head, int x) {
  ListNode *p = new ListNode(x);
  if (head == nullptr) {
    head = p;
  } else {
    p->next = head;
    head = p;
  }
}

void PrintList(ListNode *head) {
  if (head == nullptr) {
    printf("NULL\n");
    return;
  }
  while (head) {
    printf("%d->", head->val);
    head = head->next;
  }
  putchar('\n');
}

ListNode *CreateList(int a[], int n) {
  ListNode *head = nullptr;
  if (n > 0) std::reverse(a, a + n);
  for (int i = 0; i < n; i++) {
    InsertListHead(head, a[i]);
  }
  return head;
}

}  // namespace toollib