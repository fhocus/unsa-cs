#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

long long getMinDiff(const std::vector<long long> &a, long long sum, size_t i, long long prevSum)
{
  if (i == a.size())
    return std::abs((sum - prevSum) - prevSum);

  long long minDiff = sum;
  prevSum += a[i];
  for (size_t j = i + 1; j <= a.size(); ++j)
  {
    minDiff = std::min(minDiff, getMinDiff(a, sum, j, prevSum));
  }

  return minDiff;
}

long long getMinDiff(const std::vector<long long> &a, long long sum)
{
  long long minDiff = sum;

  for (size_t j = 0; j < a.size(); ++j)
  {
    minDiff = std::min(minDiff, getMinDiff(a, sum, j, 0));
  }

  return minDiff;
}

void solve()
{
  int n;
  std::cin >> n;

  std::vector<long long> a(n);
  long long sum = 0;
  for (long long &ai : a)
  {
    std::cin >> ai;
    sum += ai;
  }

  long long minDiff = getMinDiff(a, sum);
  std::cout << minDiff << std::endl;
}

int main()
{
  solve();
  return 0;
}