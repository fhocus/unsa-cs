#include <iostream>
#include <string>

void solve()
{
  size_t k;
  std::cin >> k;

  size_t len = 1;
  size_t cnt = 9;
  size_t start = 1;

  while (k > len * cnt)
  {
    k -= len * cnt;
    len++;
    cnt *= 10;
    start *= 10;
  }

  size_t num = start + (k - 1) / len;
  size_t digit = (k - 1) % len;

  std::cout << std::to_string(num)[digit] << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}