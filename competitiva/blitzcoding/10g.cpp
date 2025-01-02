#include <iostream>
#include <algorithm>
#include <string>

bool isPalindrome(std::string s)
{
  std::string s2 = s;
  std::reverse(s.begin(), s.end());
  return s2 == s;
}

void getMaxOddPalindrome(std::string s, int **memo, int i, int j)
{
  if (s == "")
  {
    memo[i][j] = 0;
    return;
  }

  if (memo[i][j] != -1)
    return;

  if (isPalindrome(s))
    memo[i][j] = s.size() % 2 == 0 ? 1 : s.size();

  getMaxOddPalindrome(s.substr(1, (int)s.size() - 1), memo, i + 1, j);
  getMaxOddPalindrome(s.substr(0, (int)s.size() - 1), memo, i, j - 1);

  memo[i][j] = std::max(memo[i][j], memo[i + 1][j]);
  memo[i][j] = std::max(memo[i][j], memo[i][j - 1]);
}

void solve()
{
  std::string s;
  std::cin >> s;
  int **memo = new int *[s.size() + 1];
  for (int i = 0; i < s.size() + 1; i++)
  {
    memo[i] = new int[s.size() + 1];
    for (int j = 0; j < s.size() + 1; j++)
      memo[i][j] = -1;
  }

  getMaxOddPalindrome(s, memo, 0, (int)s.size());

  std::cout << memo[0][s.size()] << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}