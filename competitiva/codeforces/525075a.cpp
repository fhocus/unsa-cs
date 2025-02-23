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

int main()
{
  llong n;
  std::cin >> n;

  llong count = 0;
  for (llong i = 1; i <= n; ++i)
  {
    llong a, b;
    std::cin >> a >> b;
    if (a > b)
      count++;
  }

  std::cout << count << std::endl;
  return 0;
}