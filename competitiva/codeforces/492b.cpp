#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

double vanyaAndLanterns(std::vector<int> &a)
{
  double maxDiff = a[1] - a[0];
  for (int i = 1; i < a.size() - 2; ++i)
  {
    maxDiff = std::max(maxDiff, (double)(a[i + 1] - a[i]) / 2.0);
  }

  maxDiff = std::max(maxDiff, (double)(a[a.size() - 1] - a[a.size() - 2]));

  return maxDiff;
}

int main()
{
  int n;
  unsigned long long l;
  std::cin >> n >> l;
  std::vector<int> a(n + 2);
  a[0] = 0;
  a[n + 1] = l;

  for (int i = 1; i < n + 1; ++i)
  {
    std::cin >> a[i];
  }

  std::sort(a.begin(), a.end());

  std::cout << std::fixed << std::setprecision(10) << vanyaAndLanterns(a) << std::endl;

  return 0;
}