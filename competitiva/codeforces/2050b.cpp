#include <iostream>
#include <vector>

int main()
{
  int t, n;
  std::cin >> t;
  while (t--)
  {
    std::cin >> n;
    size_t sum = n - 1;
    std::vector<size_t> a(n);
    for (int i = 0; i < n; ++i)
    {
      std::cin >> a[i];
      sum += a[i];
    }

    size_t prom = sum / n;

    for (int i = 1; i < n - 1; ++i)
    {
      size_t dif = a[i - 1] - prom;
      a[i - 1] -= dif;
      a[i + 1] += dif;
    }

    if (a[n - 1] != prom || a[n - 2] != prom || a[n - 3] != prom)
      std::cout << "NO" << std::endl;
    else
      std::cout << "YES" << std::endl;
  }
  return 0;
}