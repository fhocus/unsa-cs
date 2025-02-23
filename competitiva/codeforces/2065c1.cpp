#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
  long long int n, m;
  std::cin >> n >> m;

  std::vector<long long int> a(n);
  std::vector<long long int> b(m);

  for (auto &x : a)
    std::cin >> x;
  for (auto &x : b)
    std::cin >> x;

  bool has_answer = true;

  for (int i = 1; i < n - 1; ++i)
  {
    if (a[i] < a[i + 1] && a[i] < a[i - 1])
    {
      if (b[0] - a[i] > a[i - 1] && b[0] - a[i] < a[i + 1])
      {
        continue;
      }
      else
      {
        has_answer = false;
        break;
      }
    }
  }

  std::cout << (has_answer ? "YES" : "NO") << std::endl;
}

int main()
{
  long long int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}