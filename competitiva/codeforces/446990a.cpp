#include <iostream>
#include <string>
#include <stack>
#include <map>

std::map<char, char> m = {
    {')', '('},
    {']', '['},
    {'}', '{'},
    {'(', '\0'},
    {'[', '\0'},
    {'{', '\0'},
};

void solve()
{
  std::string s;
  std::cin >> s;

  std::stack<char> st;
  for (char c : s)
  {
    if (m[c] != '\0')
    {
      if (st.empty())
        st.push('a');
      else if (st.top() != m[c])
        break;
      else
        st.pop();
    }
    else
      st.push(c);
  }

  if (!st.empty())
    std::cout << "NO" << std::endl;
  else
    std::cout << "YES" << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}