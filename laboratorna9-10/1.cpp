#include <iostream>
using namespace std;

void calculator() {
    double num1, num2;
    char op;
    cout << "Автор: студент [Ваше ім'я]\n";
    cout << "Програма: Калькулятор\n";
    cout << "Можливості: Виконання операцій (+, -, *, /)\n";

    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть оператор (+, -, *, /): ";
    cin >> op;
    cout << "Введіть друге число: ";
    cin >> num2;

    switch (op) {
        case '+': cout << "Результат: " << num1 + num2 << endl; break;
        case '-': cout << "Результат: " << num1 - num2 << endl; break;
        case '*': cout << "Результат: " << num1 * num2 << endl; break;
        case '/': 
            if (num2 != 0) 
                cout << "Результат: " << num1 / num2 << endl; 
            else 
                cout << "Помилка: ділення на 0 неможливе\n"; 
            break;
        default: cout << "Невірний оператор!\n";
    }
}
int main() {
    char choice;
    do {
        calculator();
        cout << "Бажаєте продовжити? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
