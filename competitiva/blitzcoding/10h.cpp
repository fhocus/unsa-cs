#include <iostream>
#include <algorithm>

int levenshteinDist(std::string word1, std::string word2)
{
  int size1 = word1.size();
  int size2 = word2.size();
  int verif[size1 + 1][size2 + 1];

  if (size1 == 0)
    return size2;
  if (size2 == 0)
    return size1;

  for (int i = 0; i <= size1; i++)
    verif[i][0] = i;
  for (int j = 0; j <= size2; j++)
    verif[0][j] = j;

  for (int i = 1; i <= size1; i++)
  {
    for (int j = 1; j <= size2; j++)
    {
      int cost = (word2[j - 1] == word1[i - 1]) ? 0 : 1;

      verif[i][j] = std::min(
          std::min(verif[i - 1][j] + 1, verif[i][j - 1] + 1),
          verif[i - 1][j - 1] + cost);
    }
  }

  return verif[size1][size2];
}

void getMinChanges(std::string s, std::string u, int **memo, int i, int j)
{
  if (s == "")
  {
    memo[i][j] = (int)u.size();
    return;
  }

  if (memo[i][j] != -1)
    return;

  memo[i][j] = levenshteinDist(s, u);

  getMinChanges(s.substr(1, (int)s.size() - 1), u, memo, i + 1, j);
  getMinChanges(s.substr(0, (int)s.size() - 1), u, memo, i, j - 1);

  memo[i][j] = std::min(memo[i][j], memo[i + 1][j]);
  memo[i][j] = std::min(memo[i][j], memo[i][j - 1]);
}

void solve()
{
  std::string s, u;
  std::cin >> s >> u;

  int **memo = new int *[s.size() + 1];
  for (int i = 0; i < s.size() + 1; i++)
  {
    memo[i] = new int[s.size() + 1];
    for (int j = 0; j < s.size() + 1; j++)
      memo[i][j] = -1;
  }

  getMinChanges(s, u, memo, 0, (int)s.size());

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