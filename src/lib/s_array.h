#include <bits/stdc++.h>

class ArraySolution {
 private:
  int m_dx[4] = {0, 1, 0, -1};
  int m_dy[4] = {1, 0, -1, 0};

 public:
  std::vector<std::vector<int>> GenerateRotationMatrix(int n) {
    std::vector<std::vector<int>> ans(n, std::vector<int>(n, 0));
    std::vector<std::vector<int>> visit = ans;

    int x = 0, y = 0, i = 0, mode = 0;
    int num = n * n;
    while (i <= num) {
      ans[x][y] = i++;
      visit[x][y] = 1;
      int nextx = x + m_dx[mode], nexty = y + m_dy[mode];
      if (nextx < 0 || nexty < 0 || nextx >= n || nexty >= n ||
          visit[nextx][nexty] == 1) {
        mode = (mode + 1) % 4;
      }
      x += m_dx[mode];
      y += m_dy[mode];
    }
    return ans;
  }
};
