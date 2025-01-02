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

    int count = 1;
    while (n > 0)
    {
      n /= 4;
      count *= 2;
    }

    std::cout << count / 2 << std::endl;
  }

  return 0;
}