#include <iostream>

void solve()
{
  int n;
  std::cin >> n;

  int rest = n % 7;

  switch (rest)
  {
  case 0:
    std::cout << "DOMINGO" << std::endl;
    break;
  case 1:
    std::cout << "LUNES" << std::endl;
    break;
  case 2:
    std::cout << "MARTES" << std::endl;
    break;
  case 3:
    std::cout << "MIERCOLES" << std::endl;
    break;
  case 4:
    std::cout << "JUEVES" << std::endl;
    break;
  case 5:
    std::cout << "VIERNES" << std::endl;
    break;
  case 6:
    std::cout << "SABADO" << std::endl;
    break;

  default:
    break;
  }
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}