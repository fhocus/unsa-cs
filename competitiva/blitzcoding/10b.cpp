#include <iostream>

void solve()
{
  int M;
  std::cin >> M;

  if (M >= 1 && M < 1200)
    std::cout << "Plomo" << std::endl;
  else if (M >= 1200 && M < 1500)
    std::cout << "Verde" << std::endl;
  else if (M >= 1500 && M < 1900)
    std::cout << "Azul" << std::endl;
  else if (M >= 1900 && M < 2200)
    std::cout << "Amarillo" << std::endl;
  else if (M >= 2200)
    std::cout << "Rojo" << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}