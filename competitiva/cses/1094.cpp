#include <iostream>

int main()
{
  size_t n;
  std::cin >> n;

  size_t x;
  size_t l;
  size_t r = 0;
  std::cin >> x;
  l = x;

  while (--n)
  {
    std::cin >> x;

    if (x > l)
    {
      l = x;
      continue;
    }

    r += l - x;
  }

  std::cout << r << std::endl;
}