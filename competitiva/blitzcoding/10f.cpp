#include <iostream>
#include <string>

void solve()
{
  std::string s, size;
  std::cin >> s;

  for (char c : s)
  {
    if (c >= '0' && c <= '9')
      size += c;
    else
    {
      int sizeInt = std::stoi(size);
      int grandes = sizeInt / 50;
      sizeInt %= 50;
      int medianas = sizeInt / 10;
      int pequenas = sizeInt % 10;

      for (int i = 0; i < grandes; i++)
        std::cout << "[" << c << "]";

      for (int i = 0; i < medianas; i++)
        std::cout << "{" << c << "}";

      if (pequenas > 0)
      {
        std::cout << "(";
        for (int i = 0; i < pequenas; i++)
          std::cout << c;
        std::cout << ")";
      }
      size = "";
    }
  }
  std::cout << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}