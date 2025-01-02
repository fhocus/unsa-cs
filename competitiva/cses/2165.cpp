#include <iostream>
#include <vector>

void hanoi(int n, int o, int f, int a)
{
  if (n == 1)
    std::cout << o << " " << f << std::endl;
  else if (n % 2 == 0)
  {
    hanoi(n - 1, o, a, f);
    std::cout << o << " " << f << std::endl;
    hanoi(n - 1, a, f, o);
  }
  else
  {
    hanoi(n - 1, o, a, f);
    std::cout << o << " " << f << std::endl;
    hanoi(n - 1, a, f, o);
  }
}

int main()
{
  int n;
  std::cin >> n;

  size_t k = 1;

  for (int i = 0; i < n; i++)
    k *= 2;

  std::cout << k - 1 << std::endl;

  hanoi(n, 1, 3, 2);

  return 0;
}