#include <iostream>
#include "httplib.h"
#include "Math.h"

using namespace std;


//hello
//second hello

int main() {
	httplib::Server svr;

	svr.Get(R"(/calc/(\d+)/([\+\-\*/\^])/(\d+))", [](const httplib::Request& req, httplib::Response& res) {
		int a = std::stoi(req.matches[1]);
		std::string op = req.matches[2];
		int b = std::stoi(req.matches[3]);
		int result = 0;

		if (op == "+") result = sum(a, b);
		else if (op == "-") result = sub(a, b);
		else if (op == "*") result = mul(a, b);
		else if (op == "/") result = division(a, b);
		else if (op == "^") result = powe(a, b);
		else {
			res.status = 400;
			res.set_content("Я не знаю такой операции, вернитесь, когда меня обновят...", "text/plain");
			return;
		}

		res.set_content(std::to_string(result), "text/plain");
		});

	svr.listen("0.0.0.0", 8080);
}

/*
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

*/
