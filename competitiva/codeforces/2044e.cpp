#include <iostream>
#include <vector>
#include <math.h>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    long long int k, l1, r1, l2, r2;
    std::cin >> k >> l1 >> r1 >> l2 >> r2;

    long long int count = 0;
    long long int aux = 1;

    while (aux <= r2)
    {
      if ((l2 + aux - 1) / aux > r1)
      {
        aux *= k;
        continue;
      }
      else
        l1 = std::max(l1, l2 / aux);

      if (r2 / aux < l1)
      {
        aux *= k;
        continue;
      }
      else if (r1 * aux > r2)
        r1 = r2 / aux;

      count += r1 - l1 + 1;
      aux *= k;
    }

    std::cout << count << std::endl;
  }
  return 0;
}