#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> madj(n, std::vector<int>(n, 0));
  std::vector<std::vector<int>> ladj(n);

  for (int i = 0; i < m; ++i)
  {
    int a, b;
    std::cin >> a >> b;
    madj[a - 1][b - 1] = 1;
    madj[b - 1][a - 1] = 1;
    ladj[a - 1].push_back(b - 1);
    ladj[b - 1].push_back(a - 1);
  }

  int ans = n * 3 + 1;
  for (int i = 0; i < n; ++i)
  {
    for (int j : ladj[i])
    {
      if (j > i)
      {
        for (int k : ladj[j])
        {
          if (k > j && madj[i][k])
          {
            int sum_recognition = (ladj[i].size() - 2) + (ladj[j].size() - 2) + (ladj[k].size() - 2);
            ans = std::min(ans, sum_recognition);
          }
        }
      }
    }
  }

  if (ans == n * 3 + 1)
    ans = -1;

  std::cout << ans << std::endl;

  return 0;
}