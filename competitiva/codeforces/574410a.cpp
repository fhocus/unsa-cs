#include <iostream>
#include <vector>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    size_t n;
    std::cin >> n;

    size_t sum = 1;

    while (n != 1)
    {
      sum += n;
      if (n % 2 == 0)
        n /= 2;
      else
        n = (n - 1) / 2;
    }

    std::cout << sum << std::endl;
  }

  return 0;
}