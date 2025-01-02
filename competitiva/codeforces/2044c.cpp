#include <iostream>
#include <vector>
#include <math.h>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    size_t m, a, b, c;
    std::cin >> m >> a >> b >> c;

    size_t asiento1 = std::min(m, a);
    size_t asiento2 = std::min(m, b);
    size_t asiento3 = (m * 2 - asiento1 - asiento2);

    std::cout << asiento1 + asiento2 + std::min(asiento3, c) << std::endl;
  }
  return 0;
}