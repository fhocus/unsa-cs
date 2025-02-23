#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
  long long int n;
  std::cin >> n;

  std::vector<long long int> a(n - 2);
  for (long long int i = 0; i < n - 2; ++i)
    std::cin >> a[i];

  bool flag = true;

  for (long long int i = 1; i < n - 3; ++i)
  {
    if (a[i - 1] == 1 && a[i + 1] == 1 && a[i] == 0)
    {
      flag = false;
      break;
    }
  }

  std::cout << (flag ? "YES" : "NO") << std::endl;
}

int main()
{
  long long int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}