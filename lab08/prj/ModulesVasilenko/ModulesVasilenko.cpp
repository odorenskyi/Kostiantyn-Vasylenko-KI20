#include <iostream>
#include <math.h>

using namespace std;

int s_calculation(float x, float y, float z)
{
    float S;

    S = sqrt(z) - (sqrt(1 + x) - 3 * cos(x)) / (pow(x, 2) + sin(3.14 * x));

    return S;
}

int task_8_2_2(int a, int b)
{
    float a, b;
    float x, y, z, res;

    cout << " Vasilenko Kostyantin. CNTU 2021. (c)" << endl;

    setlocale(LC_ALL, "ukr");
    cout << "\n¬ведiть символ a: ";
    cin >> a;

    cout << "\n¬ведiть символ b: ";
    cin >> b;

    if(a+7 < b-5){
        cout << "\n–езультат: \a" << 1;
    }
    else{
        cout << "\n–езультат: \a" << 0;
    }
    cout << "\n\n¬ведiть число x: ";
    cin  >>  x;
    cout << "„исло x в шiстнадц€тковiй системi: " << hexfloat << x << endl;

    cout << "\n¬ведiть число y: ";
    cin >> y;
    cout << "„исло y в шiстнадц€тковiй системi: " << hexfloat << y << endl;

    cout << "\n¬ведiть число z: ";
    cin >> z;
    cout << "„исло z в шiстнадц€тковiй системi: " << hexfloat << z << endl;

    res = s_calculation(x, y, z);

}
