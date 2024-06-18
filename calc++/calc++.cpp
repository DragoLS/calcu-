#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int ololo = 0;
    int o = 0;
    int t = 0;
    int r = 0;
    double g = 0.00;
    while (ololo != 9)
    {
        cout << "\n";
        cout << "1 Сложение\n2 Вычитание\n3 Умножение\n4 Деление\n5 Возведение в степень\n6 Нахождение квадратного корня\n7 Нахождение 1 процента от числа\n8 Найти факториал числа\n9 Выйти из программы \n";
        cin >> ololo;
        if (ololo == 1) {
            cout << "Введите первое число\n";
            cin >> o;
            cout << "введите второе число\n";
            cin >> t;
            r = o + t;
            cout << r;
        }
        if (ololo == 2) {
            cout << "Введите первое число\n";
            cin >> o;
            cout << "введите второе число\n";
            cin >> t;
            r = o - t;
            cout << r;
        }
        if (ololo == 3) {
            cout << "Введите первое число\n";
            cin >> o;
            cout << "введите второе число\n";
            cin >> t;
            r = o * t;
            cout << r;
        }
        if (ololo == 4) {
            cout << "Введите первое число\n";
            cin >> o;
            cout << "введите второе число\n";
            cin >> t;
            g = o / t;
            cout << g;
        }
        if (ololo == 5) {
            cout << "Введите первое число\n";
            cin >> o;
            cout << "введите второе число\n";
            cin >> t;
            r = o;
            for (int i = 1; i <= t - 1; i++) {
                r = r * o;
            }
            cout << r;
        }
        if (ololo == 6) {
            cout << "Введите число\n";
            cin >> o;
            r = sqrt(o);
            cout << r;
        }
        if (ololo == 7) {
            cout << "Введите число\n";
            cin >> o;
            g = o * 0.01;
            cout << g;
        }
        if (ololo == 8) {
            cout << "Введите число\n";
            cin >> o;
            r = 1;
            for (int i = 1; i <= o; i++) {
                r = r * i;
            }
            cout << r;
        }
    }
}