#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(k, 0);
    for (int i = 0; i < k; ++i)
    {
      int b, c;
      std::cin >> b >> c;
      a[b - 1] += c;
    }

    std::sort(a.begin(), a.end(), std::greater<int>());

    int sum = 0;
    for (int i = 0; i < std::min(n, k); ++i)
    {
      sum += a[i];
    }
    std::cout << sum << std::endl;
  }
  return 0;
}