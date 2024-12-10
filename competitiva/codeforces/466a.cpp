#include <iostream>
#include <algorithm>

int cheapTravel(int n, int m, int a, int b)
{
  float cb = (float)b / m;
  if (cb < a)
    return (n / m) * b + std::min((n % m) * a, b);
  else
    return n * a;
}

int main()
{
  int n, m, a, b;
  std::cin >> n >> m >> a >> b;

  std::cout << cheapTravel(n, m, a, b) << std::endl;
  return 0;
}