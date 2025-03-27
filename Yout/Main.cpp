#include <iostream>
#include "Math.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	string operation;
	int num1, num2;

	

	while (true)
	{
		cout << "Введите выражение: ";
		cin >> num1 >> operation >> num2;

		if (operation == "+") {
			cout << sum(num1, num2) << '\n';
		}
		else if (operation == "-") {
			cout << sub(num1, num2) << '\n';
		}
		else if (operation == "*") {
			cout << mul(num1, num2) << '\n';
		}
		else if (operation == "/") {
			cout << division(num1, num2) << '\n';
		}
		else if (operation == "^") {
			cout << powe(num1, num2) << '\n';
		}
		else {
			cout << "Я не знаю такой операции, вернитесь, когда меня обновят..." << '\n';
		}
	}
	
}


