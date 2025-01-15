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

template <typename T>
size_t binarySearchLowerBound(const std::vector<T> &v, T x)
{
  size_t l = 0, r = v.size() - 1;
  while (r - l > 1)
  {
    size_t m = l + (r - l) / 2;
    if (v[m] < x)
      l = m;
    else
      r = m;
  }

  if (v[r] != x && l == 0)
    l = -1;

  std::cout << "l: " << l << std::endl;

  return l;
}

template <typename T>
size_t binarySearchUpperBound(const std::vector<T> &v, T x)
{
  size_t l = 0, r = v.size() - 1;
  while (r - l > 1)
  {
    size_t m = l + (r - l) / 2;
    if (v[m] <= x)
      l = m;
    else
      r = m;
  }

  if (v[r] != x && r == v.size() - 1)
    r = -1;

  std::cout << "r: " << r << std::endl;

  return r;
}

int main()
{
  int n, k;
  std::cin >> n >> k;

  std::vector<int> v(n);
  for (int &a : v)
    std::cin >> a;

  std::sort(v.begin(), v.end());

  while (k--)
  {
    int a;
    std::cin >> a;
    std::cout << "a: " << a << std::endl;
    std::cout << std::upper_bound(v.begin(), v.end(), a) - v.begin() << std::endl;
  }

  return 0;
}