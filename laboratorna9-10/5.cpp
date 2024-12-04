#include <iostream>
using namespace std;

void calculateFactorial() {
    cout << "Автор: студент [Ваше ім'я]\n";
    cout << "Програма: Обчислення факторіалу\n";
    cout << "Можливості: Обчислення факторіалу числа n\n";

    int n;
    cout << "Введіть число n: ";
    cin >> n;

    if (n < 0) {
        cout << "Факторіал визначений лише для невід'ємних чисел!\n";
        return;
    }

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Факторіал числа " << n << " = " << factorial << endl;
}
int main() {
    char choice;
    do {
        calculateFactorial();
        cout << "Бажаєте продовжити? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
