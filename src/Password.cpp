#include <iostream>
using namespace std;

int password() {
	system("chcp 1251 > nul");
	cout << "******** ГЕНЕРАТОР ПАРОЛЕЙ ********" << endl;
	cout << "Выберите тип пароля:" << endl << "1.Буквенный" << endl << "2.Цифровой" << endl << "3.Буквенно - цифровой" << endl;
	return 1;
}

int main() {
	password();
	return 1;
}