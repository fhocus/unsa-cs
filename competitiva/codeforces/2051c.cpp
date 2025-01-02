#include <iostream>
#include <vector>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> am(m);
    std::vector<int> qk(n + 1);
    for (int i = 0; i < m; ++i)
      std::cin >> am[i];

    for (int i = 0; i < k; ++i)
    {
      int x;
      std::cin >> x;
      qk[x]++;
    }

    int countZero = 0;
    for (int i = 1; i < n + 1; ++i)
      if (qk[i] == 0)
        countZero++;

    for (int i = 0; i < m; ++i)
    {
      if (countZero > 1)
        std::cout << "0";
      else if (countZero == 0)
        std::cout << "1";
      else
      {
        if (qk[am[i]] == 0)
          std::cout << "1";
        else
          std::cout << "0";
      }
    }

    std::cout << std::endl;
  }
  return 0;
}