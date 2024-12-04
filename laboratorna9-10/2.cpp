#include <iostream>
#include <cmath>
using namespace std;

void solveQuadratic() {
    cout << "Автор: студент [Ваше ім'я]\n";
    cout << "Програма: Розв'язання квадратного рівняння\n";
    cout << "Можливості: Знаходження коренів рівняння ax^2 + bx + c = 0\n";

    double a, b, c, D;
    cout << "Введіть коефіцієнт a: ";
    cin >> a;
    cout << "Введіть коефіцієнт b: ";
    cin >> b;
    cout << "Введіть коефіцієнт c: ";
    cin >> c;

    if (a == 0) {
        if (b != 0) 
            cout << "Розв'язок: x = " << -c / b << endl;
        else 
            cout << "Рівняння не має розв'язків.\n";
    } else {
        D = b * b - 4 * a * c;
        if (D < 0) 
            cout << "Коренів немає (D < 0).\n";
        else if (D == 0) 
            cout << "Єдиний корінь: x = " << -b / (2 * a) << endl;
        else {
            cout << "Корені: x1 = " << (-b + sqrt(D)) / (2 * a)
                 << ", x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
        }
    }
}
int main() {
    char choice;
    do {
        solveQuadratic();
        cout << "Бажаєте продовжити? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
