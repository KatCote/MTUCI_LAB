#include "global.h"

void Get(float& a, float& b, float& h)
{
    std::cout << "\nInput start point: ";
    std::cin >> a;

    std::cout << "Input end point: ";
    std::cin >> b;

    std::cout << "Input step: ";
    std::cin >> h;
}

void Put(float yMax, float yMin, int nPos, int nNeg, float result)
{
    std::cout << '\n' << "Func Max: " << yMax << '\n';
    std::cout << "Func Min: " << yMin << '\n';
    std::cout << "Pos count: " << nPos << '\n';
    std::cout << "Neg count: " << nNeg << '\n';
    std::cout << '\n' << "RESULT: " << result << '\n';
}

void CalcTable(float a, float b, float h, float& yMax, float& yMin, int& nPos, int& nNeg, float& result)
{
    std::cout << '\n' << "Values table:" << "\n\tx\ty";

    for (float i = a; i <= b; i += h)
    {
        std::cout << "\n\t" << i;
        float y_buffer = 0;

        if (i <= 5.0 && i >= 0.0) { y_buffer = 5 * exp(i); }
        else if (i > 5) { y_buffer = 2 * sin(i); }
        else if (i < 0) { y_buffer = abs(i); }

        if (i > 0) { nPos++; result *= y_buffer; }
        else if (i < 0) { nNeg++; }

        if (y_buffer > yMax) { yMax = y_buffer; }
        if (y_buffer < yMin) { yMin = y_buffer; }

        std::cout << "\t" << y_buffer;
    }

    std::cout << '\n';
}

void lab60()
{
    float a1_point; // -2
    float b1_point; // 6
    float h1; // 0.5
    float res = 1;
    float yMax = -1E38, yMin = 1E38;
    int nPos = 0, nNeg = 0;

    Get(a1_point, b1_point, h1);
    CalcTable(a1_point, b1_point, h1, yMax, yMin, nPos, nNeg, res);
    Put(yMax, yMin, nPos, nNeg, res);
}