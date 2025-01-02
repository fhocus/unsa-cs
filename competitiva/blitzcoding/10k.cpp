#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

int christmasMagic(long long n)
{
  std::string s = std::to_string(n);
  int count4 = 0;
  int count7 = 0;

  for (char c : s)
    if (c == '4')
      count4++;
    else if (c == '7')
      count7++;

  return std::abs(count4 - count7);
}

void solve()
{
  long long a, b;
  std::cin >> a >> b;

  long long ans = 0;
  for (long long i = a; i <= b; i++)
    ans += christmasMagic(i);

  std::cout << ans << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}