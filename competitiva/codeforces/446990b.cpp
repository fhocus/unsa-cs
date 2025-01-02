#include <iostream>
#include <stack>
#include <string>

int main()
{
  int t;
  std::cin >> t;

  long long a, b;
  std::stack<long long> st;
  std::string s;

  for (int i = 0; i < t; i++)
  {
    std::cin >> s;
    if (s == "+")
    {
      a = st.top();
      st.pop();
      b = st.top();
      st.pop();
      st.push(a + b);
    }
    else if (s == "*")
    {
      a = st.top();
      st.pop();
      b = st.top();
      st.pop();
      st.push(a * b);
    }
    else if (s == "-")
    {
      a = st.top();
      st.pop();
      b = st.top();
      st.pop();
      st.push(b - a);
    }
    else if (s == "/")
    {
      a = st.top();
      st.pop();
      b = st.top();
      st.pop();
      st.push(b / a);
    }
    else
      st.push(std::stoll(s));
  }

  std::cout << st.top() << std::endl;

  return 0;
}