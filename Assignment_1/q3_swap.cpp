#include <iostream>

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    using namespace std;
    int x, y;

    cout << "enter X and Y" << endl;

    cin >> x >> y;

    Swap(&x, &y);

    cout << "X: " << x << " " << "Y:" << y << endl;
}