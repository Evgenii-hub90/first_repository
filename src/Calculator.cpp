#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;

double addition(double a, double b);
double subtraction(double a, double b);
double division(double a, double b);
double multiplication(double a, double b);
double remainder(double a, double b);
double exponentiation(double a, double b);
double logarithm(double a, double b);
double square_root(double a);
double exponent(double a);
///////////////////////////////////////////////////////////////////////////////////

double calculator() {
    system("chcp 1251 > nul");
    cout << "******** КАЛЬКУЛЯТОР ******** \n\n";
    double number, numb;
    cout << "Выберите операцию: \n1.Сложение\n2.Вычитание\n3.Умножение\
        \n4.Деление\n5.Остаток от деления\n6.Возведение в степень\n7.Логарифм\
        \n8.Корень\n9.Экспонента\n10.Факториал\n11.Синус\n12.Косинус\n13.Тангенс\
        \n14.Котангенс\n15.Арксинус\n16.Арккосинус\n17.Арктангенс\n18.Арккотангенс\n\nВаш выбор:\n";

    while (!(cin >> number) || number > 18 || number <= 0) {
        if (!cin) {
            cout << "Ошибка: введено не число. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (number > 18) {
            cout << "Ошибка: число должно быть меньше 18. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (number <= 0) {
            cout << "Ошибка: число должно быть больше 0. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    if (number >= 1 && number <= 7) {
        double a, b;
        cout << "Теперь введите два числа через пробел или enter:\n";
        while (!(cin >> a >> b)) {
            cout << "Ошибка: введены не числа. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (number == 1) {
            cout << addition(a, b);
        }
        else if (number == 2) {
            cout << subtraction(a, b);
        }
        else if (number == 3) {
            cout << multiplication(a, b);
        }
        else if (number == 4) {
            cout << division(a, b);
        }
        else if (number == 5) {
            cout << remainder(a, b);
        }
        else if (number == 6) {
            cout << exponentiation(a, b);
        }
        else if (number == 7) {
            cout << logarithm(a, b);
        }
    }
    if (number >= 8 && number <= 18) {
        double a;
        cout << "Теперь введите число:\n";
        while (!(cin >> a)) {
            cout << "Ошибка: введено не число. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (number == 8) {
            cout << square_root(a);
        }
        else if (number == 9) {
            cout << exponent(a);
        }
    }
    cout << endl << endl << "Хотите продолжить?";
    cout << "\n1.Продолжить\n2.Выйти" << endl << "Ваш выбор : \n";
    while (!(cin >> numb) || numb > 2 || numb < 1) {
        if (!cin) {
            cout << "Ошибка: введено не число. Попробуйте еще раз: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (numb > 2) {
            cout << "Ошибка: число должно быть от 1 до 2. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (numb < 1) {
            cout << "Ошибка: число должно быть от 1 до 2. Попробуйте еще раз: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    if (numb == 1) {
        calculator();
    }
    else if (numb == 2) {
        cout << "Хорошего дня\n";
        exit(0);
    }
    return 0;
}

double addition(double a, double b) {
    cout << "Результат сложения:\n";
    return a + b;
}

double subtraction(double a, double b) {
    cout << "Результат вычитания:\n";
    return a - b;
}

double division(double a, double b) {
    while (b == 0) {
        cout << "Ошибка: делитель не может быть нулём, либо введено не число. Введите другое число: \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> b;
    }
    cout << "Результат деления:\n";
    return a / b;
}

double multiplication(double a, double b) {
    cout << "Результат умножения:\n";
    return a * b;
}

double remainder(double a, double b) {
    while (b == 0) {
        cout << "Ошибка: делитель не может быть нулём, либо введено не число. Введите другое число: \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> b;
    }
    cout << "Остаток от деления:\n";
    return fmod(a, b);
}

double exponentiation(double a, double b) {
    cout << "Число " << a << " в степени " << b << ":" << endl;
    return pow(a, b);
}

double logarithm(double a, double b) {
    cout << "Логарифм числа " << b << " по основанию " << a << ":" << endl;
    return log(b) / log(a);
}

double square_root(double a) {
    cout << "Квадратный корень из " << a << ":" << endl;
    return sqrt(a);
}

double exponent(double a) {
    cout << "Экспонента в степени " << a << ":" << endl;
    return exp(a);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    calculator();
    return 0;
}
