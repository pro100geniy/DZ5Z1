#include <iostream>
using namespace std;

#include <Windows.h>
#include <string>
// ������� ��� ����� �������� n � p
 inline void input(double& n, int& p) {
    cout << "������� ����� n: ";
    cin >> n;
    cout << "������� ������� p (�� ��������� 2): ";
    cin >> p;
}

// ������� ��� ���������� ������� � ������� ��������
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

// ������ ��� ������ ����������
#define PRINT_RESULT(n, p, result) (cout << n << " � ������� " << p << " ����� " << result << endl)

int main() {

    SetConsoleOutputCP(1251);
    double n;
    int p;
    // ����� ������� input() ��� ����� �������� n � p
    input(n, p);

    // ����� ������� power() � ����� ���������� n
    double result1 = power(n);
    PRINT_RESULT(n, 2, result1);

    // ����� ������� power() � ����� ����������� n � p
    double result2 = power(n, p);
    PRINT_RESULT(n, p, result2);
      return 0;
}