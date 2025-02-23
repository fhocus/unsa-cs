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
  llong n, a, sumMax = -1000000000, sumInt = 0;
  std::cin >> n;

  for (llong i = 0; i < n; ++i)
  {
    if (sumInt < 0)
      sumInt = 0;

    std::cin >> a;
    sumInt += a;

    sumMax = std::max(sumMax, sumInt);
  }

  std::cout << sumMax << std::endl;

  return 0;
}