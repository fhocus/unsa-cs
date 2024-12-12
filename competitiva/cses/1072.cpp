#include <iostream>

size_t combinatoria(size_t n, size_t k)
{
  size_t result = 1;
  for (size_t i = n; i > n - k; i--)
  {
    result *= i;
  }

  result /= k;

  return result;
}

int main()
{
  size_t n;
  std::cin >> n;
  size_t last = 0;

  std::cout << 0 << std::endl;

  for (size_t i = 2; i <= n; i++)
  {
    size_t comb = combinatoria(i * i, 2);
    std::cout << comb - (last + (8 * (i - 2))) << std::endl;
    last = last + (8 * (i - 2));
  }
  return 0;
}