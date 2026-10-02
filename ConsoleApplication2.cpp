#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int S, V, rho, CL, L;
    cout << "Введите площадь крыла S:";
    cin >> S;
    cout << "Введите скорость полёта V:";
    cin >> V;
    cout << "Введите плотность воздуха rho:";
    cin >> rho;
    cout << "Введите коэффициент подъёмной силы CL:";
    cin >> CL;
    L = rho * V * V * S * CL / 2;
    printf("Подъёмная сила L = %d", L);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
