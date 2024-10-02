#include <iostream>

void fact(int a, int &result)
{
    result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
}

int main()
{

    int a = 5;

    int facto;

    int &result = facto;

    fact(a, result);

    std::cout << result << std::endl;
}