#include <iostream>
#include <algorithm>
#include <stack>
#include <iostream>
#include <string>

void solve()
{
  std::string s, aux;
  std::stack<std::string> st;
  std::getline(std::cin, s);

  st.push("");

  for (char c : s)
  {
    if (c == '(')
    {
      st.push("");
    }
    else if (c == ')')
    {
      std::string top = st.top();
      st.pop();
      std::reverse(top.begin(), top.end());
      st.top() += top;
    }
    else
    {
      st.top() += c;
    }
  }

  std::cout << st.top() << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  std::cin.ignore();
  while (t--)
    solve();
  return 0;
}