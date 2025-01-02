#include <iostream>
#include <vector>
#include <map>

int main()
{
  std::string s;
  std::cin >> s;

  std::map<char, char> map = {
      {'0', '0'},
      {'1', '1'},
      {'2', '2'},
      {'3', 'E'},
      {'4', '.'},
      {'5', '5'},
      {'6', '9'},
      {'7', '.'},
      {'8', '8'},
      {'9', '6'},
      {'A', '.'},
      {'b', '.'},
      {'C', '.'},
      {'d', '.'},
      {'E', '3'},
      {'F', '.'},
  };

  size_t ans = 0;

  for (int i = 0; i < (s.size() + 1) / 2; i++)
  {
    char f = s[i];
    char l = s[s.size() - i - 1];

    if (i == s.size() - i - 1)
    {
      if (map[f] == '.' || map[f] != l)
        ans++;
      break;
    }

    if (map[f] == '.' && map[l] == '.')
      ans += 2;
    else if (map[f] != '.' && map[l] == '.')
      ans++;
    else if (map[f] == '.' && map[l] != '.')
      ans++;
    else if (map[f] != l)
      ans++;
    else if (map[l] != f)
      ans++;
  }

  std::cout << ans << std::endl;

  return 0;
}