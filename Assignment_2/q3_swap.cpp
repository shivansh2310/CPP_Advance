#include <iostream>

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4;
    int b = 3;

    int &res1 = a;
    int &res2 = b;

    Swap(res1, res2);

    std::cout << "a: " << a << " " << "b: " << b << std::endl;
}
