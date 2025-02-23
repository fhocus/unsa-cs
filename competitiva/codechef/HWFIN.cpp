#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
  long long int x, y;
  std::cin >> x >> y;

  if ((x + (y * 10)) >= 100)
  {
    std::cout << "Yes" << std::endl;
  }
  else
  {
    std::cout << "No" << std::endl;
  }

  return 0;
}