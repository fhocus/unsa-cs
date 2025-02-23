#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
  long long int n, a, ans;
  std::cin >> n;
  ans = n;

  std::vector<bool> b(n + 1, 0);

  for (int i = 0; i < n; ++i)
  {
    std::cin >> a;
    if (b[a])
    {
      b[a] = 0;
      ans--;
      if (b[0])
      {
        ans--;
      }
      else
      {
        b[0] = 1;
      }
    }
    else
    {
      b[a] = 1;
    }
  }

  std::cout << ans << std::endl;
}

int main()
{
  long long int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}