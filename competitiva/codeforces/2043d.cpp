#include <iostream>
#include <vector>
#include <numeric>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    size_t l, r, G;
    std::cin >> l >> r >> G;

    size_t min = G;
    while (min < l)
      min += G;

    size_t max = min;

    while (max + G <= r)
    {
      max += G;
      if (min / G >= G)
        if (max / G == ((min / G) * 2) - 1)
          break;
    }

    if (max == min && max > G)
    {
      std::cout << "-1 -1" << std::endl;
    }
    else
    {
      std::cout << min << " " << max << std::endl;
    }
  }
  return 0;
}