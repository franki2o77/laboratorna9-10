#include <iostream>
using namespace std;

void multiplicationTable() {
    cout << "Автор: студент [Ваше ім'я]\n";
    cout << "Програма: Таблиця множення\n";
    cout << "Можливості: Виведення таблиці множення для заданого числа\n";

    int num;
    cout << "Введіть число: ";
    cin >> num;

    cout << "Таблиця множення для " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
int main() {
    char choice;
    do {
        multiplicationTable();
        cout << "Бажаєте продовжити? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
