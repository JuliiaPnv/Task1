#include <iostream>
using namespace std;
int main()
{
    int A, N, max, min, d, i;
    setlocale(LC_ALL, "Rus");
    N = 1;
    for (N; N <= 10; N++)
    {
        cout << "A = ";
        cin >> A;
        max = A - 1;
        min = 2;
        for (i = 0; i <= A; i++)
        {
            if (A % max != 0)
                max--;
            if (A % min != 0)
                min++;
        }
        if (min != A && max != 1)
        {
            cout << "min divisor = " << min << endl << "max divisor = " << max << endl;
            d = min * max;
            cout << "d = " << d << endl;
        }
        else
            cout << A << " is prime number" << endl;
    }
}