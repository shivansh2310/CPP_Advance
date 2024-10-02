#include <iostream>

void fact(int *a, int *result)
{
    *result = 1;
    for (int i = 1; i <= *a; ++i)
    {
        *result *= i;
    }
}

int main()
{

    using namespace std;
    int x, result;

    cout << "enter X " << endl;

    cin >> x;

    fact(&x, &result);

    cout << "Factorial: " << result << endl;
}