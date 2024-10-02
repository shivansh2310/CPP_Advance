#include <iostream>

void Add(int a, int b, int &result)
{

    result = a + b;
}

int main()
{

    int a = 5;
    int b = 10;

    int sum;

    int &result = sum;

    Add(a, b, result);

    std::cout << result << std::endl;
}