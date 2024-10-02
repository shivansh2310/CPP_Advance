#include <iostream>

void AddVal(int *a, int *b, int *result)
{
    *result = (*a) + (*b);
}

int main()
{

    using namespace std;
    int x, y, sum;

    cin >> x >> y;

    AddVal(&x, &y, &sum);

    cout << "sum: " << sum << endl;
}