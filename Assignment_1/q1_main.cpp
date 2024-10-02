#include <iostream>

int Add(int *a, int *b)
{
    return (*a) + (*b);
}

int main()
{

    using namespace std;
    int x, y;

    cin >> x >> y;

    int result = Add(&x, &y);

    cout << "sum: " << result << endl;
}