#include <iostream>
#include <string>

void solve()
{
  size_t k;
  std::cin >> k;

  std::cout << k % 1 << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}