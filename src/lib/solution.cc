#include "solution.h"

#include <iostream>

Solution::Solution(const std::string& ss) {
  this->name = ss;
  std::cout << "Init Solution Instance" << std::endl;
}

std::string Solution::PrintName() {
  std::cout << "Solution name: " << this->name << std::endl;
  return this->name;
}

int Solution::fib(int index) {
  if (index <= 1) return 1;
  int states[] = {1, 1};
  for (int i = 2; i <= index; i++) {
    int tmp = i % 2;
    states[tmp] = states[0] + states[1];
  }
  return states[index % 2];
}
