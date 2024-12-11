#include <iostream>

int main()
{
  size_t n;
  std::cin >> n;

  if (n == 2 || n == 3)
    std::cout << "NO SOLUTION" << std::endl;
  else
  {
    size_t a = n % 2 == 0 ? 2 : 1;
    size_t b = n % 2 == 0 ? 1 : 2;

    for (size_t i = a; i <= n; i += 2)
    {
      std::cout << i << " ";
    }

    for (size_t i = b; i <= n; i += 2)
    {
      std::cout << i << " ";
    }

    std::cout << std::endl;
  }
}