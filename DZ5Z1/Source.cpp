#include <iostream>
using namespace std;

#include <Windows.h>
#include <string>
// Функция для ввода значений n и p
 inline void input(double& n, int& p) {
    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите степень p (по умолчанию 2): ";
    cin >> p;
}

// Функция для вычисления степени с помощью рекурсии
double power(double n, int p = 2) {
    if (p == 0) {
        return 1;
    }
    else if (p < 0) {
        return 1 / power(n, -p);
    }
    else {
        return n * power(n, p - 1);
    }
}

// Макрос для вывода результата
#define PRINT_RESULT(n, p, result) (cout << n << " в степени " << p << " равно " << result << endl)

int main() {

    SetConsoleOutputCP(1251);
    double n;
    int p;
    // Вызов функции input() для ввода значений n и p
    input(n, p);

    // Вызов функции power() с одним аргументом n
    double result1 = power(n);
    PRINT_RESULT(n, 2, result1);

    // Вызов функции power() с двумя аргументами n и p
    double result2 = power(n, p);
    PRINT_RESULT(n, p, result2);
      return 0;
}