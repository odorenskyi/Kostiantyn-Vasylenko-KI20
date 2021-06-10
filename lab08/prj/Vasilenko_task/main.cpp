#include <iostream>
#include "ModulesVasilenko.h"
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    cout << "\n¬асиленко  ост€нтин ÷Ќ“” 2021. (c)";


    float x, y, z, res, t;
    int a, b;

    cout << "\n¬ведiть x: ";
    cin >> x;

    cout << "\n¬ведiть y: ";
    cin >> y;

    cout << "\n¬ведiть z: ";
    cin >> z;

    res = s_calculation(x, y, z);

    cout << "\n–езультат обчисленн€ функцiњ s_calculation - " <<res;

    cout << "\n¬ведiть a: ";
    cin >> a;

    cout << "\n¬ведiть b: ";
    cin >> b;

    t = task_8_2_2(a, b);

    cout << "\n–езультат виконанн€ завданн€ 8.2.2: " << t;

    cout << "\nX в шiстнадц€тковiй системi численн€: " << x << hex;

    cout << "\nY в шiстнадц€тковiй системi численн€: " << y << hex;

    cout << "\nZ в шiстнадц€тковiй системi численн€: " << z << hex << endl;

    system("pause");
}
