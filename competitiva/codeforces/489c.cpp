#include <iostream>
#include <string>

std::pair<std::string, std::string> givenLengthAndSumOfDigits(int m, int s)
{
    std::string min, max;
    int sizeU = (s + 8) / 9;
    int sizeL = s / 9;
    if (m == 1 && s == 0)
    {
        min = "0";
        max = "0";
    }
    else if (sizeU > m || s == 0)
    {
        min = "-1";
        max = "-1";
    }
    else if (sizeU == m)
    {
        for (int i = 0; i < sizeL; ++i)
        {
            max += "9";
            min += "9";
        }

        if (max.size() < m)
        {
            max += std::to_string(s - sizeL * 9);
            min = std::to_string(s - sizeL * 9) + min;
        }
    }
    else
    {
        for (int i = 0; i < sizeL; ++i)
        {
            max += "9";
            min += "9";
        }
        int rest = s - sizeL * 9;
        std::string maxTmp = std::to_string(rest);
        std::string minTmp = std::to_string(rest - 1);

        for (int i = 0; i < m - sizeU - 1; ++i)
        {
            maxTmp += "0";
            minTmp = "0" + minTmp;
        }

        maxTmp += "0";
        minTmp = "1" + minTmp;

        max += maxTmp;
        min = minTmp + min;
    }

    return std::make_pair(min, max);
}

int main()
{
    int m, s;
    std::cin >> m >> s;

    std::pair<std::string, std::string> p = givenLengthAndSumOfDigits(m, s);
    std::cout << p.first << " " << p.second << std::endl;

    return 0;
}