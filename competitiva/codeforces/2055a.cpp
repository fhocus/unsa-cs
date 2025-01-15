#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

#define llong long long
#define ulong unsigned long long
#define mk(a, b) std::make_pair(a, b)
#define f first
#define s second
#define sortInc(v) std::sort(v.begin(), v.end())
#define sortInc(v, x) std::sort(v.begin() + x, v.end())
#define sortDec(v) std::sort(v.begin(), v.end(), std::greater<int>())
#define sortDec(v, x) std::sort(v.begin() + x, v.end(), std::greater<int>())

void solve()
{
  int n, a, b;
  std::cin >> n >> a >> b;

  if ((std::max(a, b) - std::min(a, b)) % 2 == 0)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}

int main()
{
  llong t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}