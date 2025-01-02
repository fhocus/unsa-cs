#include <iostream>
#include <vector>

int main()
{
  int t, n, k;
  long long price;
  std::vector<long long> a, b;
  std::cin >> t;

  while (t--)
  {
    std::cin >> n >> k;
    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; ++i)
      std::cin >> a[i];

    for (int i = 0; i < n; ++i)
      std::cin >> b[i];
  }
}