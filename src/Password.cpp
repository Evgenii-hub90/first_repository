#include <iostream>
#include <string>
using namespace std;

int password() {
    int number, a, b;
    system("chcp 1251 > nul");
    cout << "******** ГЕНЕРАТОР ПАРОЛЕЙ ********" << endl;
    cout << "Выберите тип пароля:" << endl << "1.Буквенный" << endl << "2.Цифровой" << endl << "3.Буквенно - цифровой" << endl << endl << "Ваш выбор:" << endl;
    while (!(cin >> number) || number > 3 || number <= 0) {
        if (!cin) {
            cout << "Ошибка: введено не число. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (number > 3) {
            cout << "Ошибка: число должно быть меньше или равно 3. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (number <= 0) {
            cout << "Ошибка: число должно быть больше 0. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    cout << endl << "Выбран тип: ";
    if (number == 1) {
        cout << "Буквенный" << endl;
    }
    else if (number == 2) {
        cout << "Цифровой" << endl;
    }
    else {
        cout << "Буквенно - цифровой" << endl;
    }

    cout << endl << "Введите длину пароля(1 -  10000 символов):" << endl;
    while (!(cin >> b) || b > 10000 || b <= 0) {
        if (!cin) {
            cout << "Ошибка: введено не число. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (b > 10000) {
            cout << "Ошибка: число должно быть меньше или равно 10000. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (b <= 0) {
            cout << "Ошибка: число должно быть больше 0. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << endl << "Длина пароля: " << b << endl;

    cout << endl << "Исключить повторяющиеся символы?(1 - yes/2 - no)" << endl;
    while (!(cin >> a) || a > 2 || a <= 0) {
        if (!cin) {
            cout << "Ошибка: введено не число. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (number > 2) {
            cout << "Ошибка: число должно быть меньше или равно 2. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (number <= 0) {
            cout << "Ошибка: число должно быть больше 0. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << endl;
    if (a == 1) {
        cout << "Повторяющиеся символы: ИСКЛЮЧЕНЫ" << endl;
    }
    else {
        cout << "Повторяющиеся символы: РАЗРЕШЕНЫ" << endl;
    }
    return 0;
}


int main() {
    password();
    return 0;
}