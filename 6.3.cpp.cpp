#include <iostream>
#include <iomanip>

using namespace std;

int MaxEven(int* a, const int size, bool& found);

int main()
{
    const int n = 10;

    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Array:" << endl;

    for (int i = 0; i < n; i++)
        cout << setw(5) << a[i];

    cout << endl;

    bool found;

    int max = MaxEven(a, n, found);

    if (found)
        cout << "Max even = " << max << endl;
    else
        cout << "No even elements" << endl;

    return 0;
}

// Пошук найбільшого парного елемента
int MaxEven(int* a, const int size, bool& found)
{
    int max = 0;
    found = false;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (found == false || a[i] > max)
            {
                max = a[i];
                found = true;
            }
        }
    }

    return max;
}