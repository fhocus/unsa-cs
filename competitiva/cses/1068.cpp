#include <iostream>

int main()
{
  size_t n;
  std::cin >> n;

  if (n == 1)
    std::cout << 1 << std::endl;
  else
  {
    std::cout << n << " ";

    while (n != 2)
    {
      if (n % 2 == 0)
        n /= 2;
      else
        n = (n * 3) + 1;

      std::cout << n << " ";
    }

    std::cout << 1 << std::endl;
  }

  return 0;
}