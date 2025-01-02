#include <iostream>
#include <vector>

int main()
{
  size_t t, n;
  std::cin >> t;

  while (t--)
  {
    std::cin >> n;
    std::vector<size_t> b(n, 0);
    size_t a;

    for (int i = 0; i < n; ++i)
    {
      std::cin >> a;
      if (b[a - 1] == 0)
      {
        std::cout << a << " ";
        b[a - 1] = 1;
      }
    }

    for (int i = 0; i < n; ++i)
    {
      if (b[i] == 0)
        std::cout << i + 1 << " ";
    }

    std::cout << std::endl;
  }

  return 0;
}