#include <iostream>
#include <vector>

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      int a;
      std::cin >> a;
      if (a == 1)
      {
        sum++;
      }
    }

    std::cout << sum << " ";
  }
}