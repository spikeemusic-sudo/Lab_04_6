// Lab_04_6.cpp
// Фащевський Богдан
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 28

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int i, k;

    // 1) Спосіб за допомогою циклів while
    P = 1.0;
    i = 2;
    while (i <= 10)
    {
        S = 0.0;
        k = 1;
        while (k <= 20 - i)
        {
            S += (1.0 * i) / k;
            k++;
        }
        P *= (1.0 + S) / (1.0 + S * S);
        i++;
    }
    cout << "1) while:          " << P << endl;

    // 2) Спосіб за допомогою циклів do...while
    P = 1.0;
    i = 2;
    do
    {
        S = 0.0;
        k = 1;
        do
        {
            S += (1.0 * i) / k;
            k++;
        } while (k <= 20 - i);

        P *= (1.0 + S) / (1.0 + S * S);
        i++;
    } while (i <= 10);
    cout << "2) do...while:     " << P << endl;

    // 3) Спосіб за допомогою циклів for (зі збільшенням лічильників)
    P = 1.0;
    for (i = 2; i <= 10; i++)
    {
        S = 0.0;
        for (k = 1; k <= 20 - i; k++)
        {
            S += (1.0 * i) / k;
        }
        P *= (1.0 + S) / (1.0 + S * S);
    }
    cout << "3) for (i++, k++): " << P << endl;

    // 4) Спосіб за допомогою циклів for (зі зменшенням лічильників)
    P = 1.0;
    for (i = 10; i >= 2; i--)
    {
        S = 0.0;
        for (k = 20 - i; k >= 1; k--)
        {
            S += (1.0 * i) / k;
        }
        P *= (1.0 + S) / (1.0 + S * S);
    }
    cout << "4) for (i--, k--): " << P << endl;

    return 0;
}