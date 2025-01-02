#include <iostream>

int main()
{
  size_t n;
  std::cin >> n;

  if (n % 4 == 0 || n % 4 == 3)
  {
    std::cout << "YES" << std::endl;

    if (n % 4 == 3)
    {
      std::cout << 2 + (n - 3) / 2 << std::endl;

      std::cout << "1 2 ";

      for (size_t i = 1; i <= (n - 3) / 2; i += 2)
      {
        std::cout << i + 3 << " " << n - i + 1 << " ";
      }

      std::cout << std::endl;

      std::cout << 1 + (n - 3) / 2 << std::endl;

      std::cout << "3 ";

      for (size_t i = 2; i <= (n - 3) / 2; i += 2)
      {
        std::cout << i + 3 << " " << n - i + 1 << " ";
      }

      std::cout << std::endl;
    }
    else
    {
      std::cout << n / 2 << std::endl;

      for (size_t i = 1; i <= n / 2; i += 2)
      {
        std::cout << i << " " << n - i + 1 << " ";
      }

      std::cout << std::endl;

      std::cout << n / 2 << std::endl;

      for (size_t i = 2; i <= n / 2; i += 2)
      {
        std::cout << i << " " << n - i + 1 << " ";
      }

      std::cout << std::endl;
    }
  }
  else
  {
    std::cout << "NO" << std::endl;
  }

  return 0;
}