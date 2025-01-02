#include <iostream>
#include <vector>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    size_t n, d;
    std::cin >> n >> d;
    std::vector<int> a = {1};

    if (n >= 3 || d % 3 == 0)
      a.push_back(3);

    if (d == 5)
      a.push_back(5);

    if (n >= 3 || d == 7)
      a.push_back(7);

    if (d % 9 == 0)
      a.push_back(9);
    else if (n >= 6)
      a.push_back(9);
    else if (d % 3 == 0)
      if (n >= 3)
        a.push_back(9);

    for (auto i : a)
      std::cout << i << " ";
    std::cout << std::endl;
  }
  return 0;
}