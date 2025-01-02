#include <iostream>
#include <vector>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    long long int n;
    std::vector<long long int> v(3);
    std::cin >> n;

    for (int i = 0; i < 3; ++i)
      std::cin >> v[i];

    int days = (n / (v[0] + v[1] + v[2])) * 3;

    n -= (days / 3) * (v[0] + v[1] + v[2]);

    for (int i = 0; i < 3; ++i)
    {
      if (n <= 0)
        break;
      days++;
      n -= v[i];
    }

    std::cout << days << std::endl;
  }
  return 0;
}