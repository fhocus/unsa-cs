#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> madj(n, std::vector<int>(n));
  std::vector<std::vector<int>> ladj(n);

  for (int i = 0; i < m; ++i)
  {
    int u, v;
    std::cin >> u >> v;
    madj[u - 1][v - 1] = 1;
    madj[v - 1][u - 1] = 1;
    ladj[u - 1].push_back(v - 1);
    ladj[v - 1].push_back(u - 1);
  }

  bool is_bus = 1;
  bool is_ring = 1;
  bool is_star = 1;

  bool has_center = 0;

  for (int i = 0; i < n; ++i)
  {
    if (i < n - 1)
    {
      if (madj[i][i + 1] == 0)
      {
        is_bus = 0;
        is_ring = 0;
      }
    }

    if (i == n - 1)
      if (madj[i][0] == 0)
        is_ring = 0;
      else
        is_bus = 0;

    if (ladj[i].size() != 1 && ladj[i].size() != n - 1)
      is_star = 0;

    if (ladj[i].size() == n - 1)
      has_center = 1;
  }

  if (!has_center)
    is_star = 0;

  if (is_bus)
    std::cout << "bus topology" << std::endl;
  else if (is_ring)
    std::cout << "ring topology" << std::endl;
  else if (is_star)
    std::cout << "star topology" << std::endl;
  else
    std::cout << "unknown topology" << std::endl;
}