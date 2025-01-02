#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    long long int count = 0;
    long long int sum = 0;
    long long int n, x, y;
    std::cin >> n >> x >> y;
    std::vector<long long int> a(n);

    for (int i = 0; i < n; ++i)
    {
      std::cin >> a[i];
      sum += a[i];
    }

    std::sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
      auto it1 = std::upper_bound(a.begin() + i + 1, a.end(), (sum - x) - a[i]);
      auto it2 = std::lower_bound(a.begin() + i + 1, a.end(), (sum - y) - a[i]);
      count += (it1 - it2);
    }

    std::cout << count << std::endl;
  }
  return 0;
}