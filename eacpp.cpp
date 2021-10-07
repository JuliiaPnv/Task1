#include <iostream>
using namespace std;
int main()
{
    int A, N, max, min, d, i;
    setlocale(LC_ALL, "Rus");
    N = 1;
    for (N; N <= 10; N++)
    {
        cout << "введите число = ";
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
            cout << "минимальный делитель = " << min << endl << "максимальный делитель = " << max << endl;
            d = min * max;
            cout << "произведение делителей d = " << d << endl;
        }
        else
            cout << "число " << A << " является простым числом" << endl;
    }
}