#include <iostream>

int main()
{
  int t;
  size_t y, x;
  std::cin >> t;

  while (t--)
  {
    std::cin >> y >> x;

    if (y == x)
      std::cout << ((y - 1) * x) + 1 << std::endl;
    else if (y > x)
    {
      if (y % 2 == 0)
        std::cout << (y * y) - (x - 1) << std::endl;
      else
        std::cout << (1 + ((y - 1) * (y - 1))) + (x - 1) << std::endl;
    }
    else
    {
      if (x % 2 == 1)
        std::cout << (x * x) - (y - 1) << std::endl;
      else
        std::cout << (2 + ((x - 1) * (x - 1)) - 1) + (y - 1) << std::endl;
    }
  }
  return 0;
}