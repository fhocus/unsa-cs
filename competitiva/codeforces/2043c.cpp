#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    size_t n;
    std::cin >> n;
    std::vector<long long> a(n);
    std::map<long long, int> m;
    std::set<long long> s;
    s.insert(0);

    for (size_t i = 0; i < n; ++i)
      std::cin >> a[i];

    for (size_t i = 0; i < n; ++i)
    {
      long long x = 0;
      s.insert(a[i]);
      for (size_t j = i; j < n; ++j)
      {
        x += a[j];
        s.insert(x);
      }
    }

    std::cout << s.size() << std::endl;

    for (auto i : s)
    {
      std::cout << i << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}