#include <iostream>

bool iHate1111(int x)
{
    if (x % 11 == 0)
        return true;
    else if (x % 111 == 0)
        return true;
    else
    {
        for (int i = 0; i < x; i += 111)
        {
            if ((x - i) % 11 == 0)
                return true;
        }
        return false;
    }
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        std::cin >> x;

        if (iHate1111(x))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
}