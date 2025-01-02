#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    long long int a, b, c;
    std::cin >> a >> b;

    c = MAX(a, b);
    b = MIN(a, b);
    a = c;

    c = a - b;
    a = a - (c * 2);
    b = b - c;

    if (a >= 0)
    {
      if (a % 3 == 0)
      {
        std::cout << "YES" << std::endl;
      }
      else
      {
        std::cout << "NO" << std::endl;
      }
    }
    else
    {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}