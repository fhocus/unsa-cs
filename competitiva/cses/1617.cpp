#include <iostream>
#include <vector>

int main()
{
  size_t n, res = 1;
  std::cin >> n;

  while (n--)
  {
    res *= 2;
    res %= (size_t)1e9 + 7;
  }

  std::cout << res << std::endl;

  return 0;
}