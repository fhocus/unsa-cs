#include <iostream>
#include <vector>

const int N = 800 + 1;

int main()
{
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> ma(n, std::vector<int>(n, 0));

  for (int i = 0; i < m; i++)
  {
    int u, v;
    std::cin >> u >> v;
    u--;
    v--;
    ma[u][v]++;
    ma[v][u]++;
  }

  bool ok = true;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      if (ma[i][j] != 1)
        ok = 0;
    }
  }

  if (ok)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}