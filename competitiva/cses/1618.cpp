#include <iostream>

int main()
{
  size_t n;
  std::cin >> n;

  int ans = 0;

  while (n > 1)
  {
    n /= 5;
    ans += n;
  }

  std::cout << ans << std::endl;

  return 0;
}