#include <iostream>
#include <map>
#include <vector>

#include "src/lib/solution.h"

int main() {
  Solution solution("fib_solution");
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
  std::map<int, int> results;

  for (const auto i : v) {
    int r = solution.fib(i);
    results[i] = r;
    std::cout << "r: " << r << std::endl;
  }
}