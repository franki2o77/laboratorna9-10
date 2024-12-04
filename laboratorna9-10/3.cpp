#include <iostream>
using namespace std;

void findMinimum() {
    cout << "Автор: студент [Ваше ім'я]\n";
    cout << "Програма: Пошук мінімального числа\n";
    cout << "Можливості: Знаходження мінімального числа серед введених\n";

    int n;
    cout << "Скільки чисел бажаєте ввести? ";
    cin >> n;

    if (n <= 0) {
        cout << "Кількість чисел має бути більшою за 0!\n";
        return;
    }

    double minNum, current;
    cout << "Введіть число 1: ";
    cin >> minNum;

    for (int i = 2; i <= n; i++) {
        cout << "Введіть число " << i << ": ";
        cin >> current;
        if (current < minNum) {
            minNum = current;
        }
    }
    cout << "Мінімальне число: " << minNum << endl;
}
int main() {
    char choice;
    do {
        findMinimum();
        cout << "Бажаєте продовжити? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
