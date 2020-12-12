#include <iostream> // - заголовочный файл для cout, << и много чего ещё
#include <locale.h> // - заголовочный файл для функции setlocale()
#include <iomanip> // - заголовочный файл для функций управления печатью bin(), hex() и др.
#include <bitset>
// ТЕМА 1. ОПЕРАТОРЫ C/C++, СТРОЕНИЕ МИНИМАЛЬНОЙ ПРОГРАММЫ C/C++

// main - во-первых - функция, во-вторых - точка входа
// во всей программе должна быть только одна функция main()
int main() 
{ 
	// блоки кода в функциях, операторах, и просто блоки отдельно взятого кода по C/C++ окружаются фигурными скобками

	/* Классификация операторов
	* 1. Арифмитические (+, -, *, /, % - остаток от целого деления)
	*    а) Логические или Булевы (|| - оператор "или", && - оператор "и")
	                              ++ - увеличить на единицу, или "инкремент"
								  -- - уменьшить на единицу, или "декремент"
	*    б) Бинарные (& - бинарное "и", | - бинарное "или")
	*    в) Операторы сравнения (> - больше, < - меньше, == - равно)
	                            (>= - больше или равно, <= - меньше или равно)
	*
	*/
	setlocale(LC_ALL, "Russian");
	int a = 10;
	int b = 3;
	int result = 10 % 3;
	std::cout
		<< "Лабораторная работа 1. ОПЕРАТОРЫ C / C++, "
		   "СТРОЕНИЕ МИНИМАЛЬНОЙ ПРОГРАММЫ C / C++"
		<< std::endl;
	std::cout << "a = 10, b = 3" << std::endl; // endl - просто перенос на следующую
	std::cout << "10 % 3 = " << 10 % 3 << "\n"; // \n - то же самое, что и std::endl

	std::cout << "\n" << "Таблица значений операции &&" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true && true) << "\t\t" << (true && false) << std::endl;
	std::cout << "a = false" << "\t" << (false && true) << "\t\t" << (false && false) << "\n" << std::endl;

	std::cout << "Таблица значений операции ||" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true || true) << "\t\t" << (true || false) << std::endl;
	std::cout << "a = false" << "\t" << (false || true) << "\t\t" << (false || false) << std::endl;



	int binary_int = 0b1010;

	std::cout << "\n" << "\n" << "\n" << "\n" << "Бинарное число = binary_int " << std::bitset<8>(binary_int) << "\n" << std::endl;
	int binary_inta = 0b1010;
	int binary_intb = 0b1100;
	std::cout << "\n" << "Таблица бинарных значений операции &" << std::endl;
	std::cout << "Первое число = "  <<std::bitset<4>(binary_inta) << std::endl;
	std::cout << "Второе число = "  << std::bitset<4>(binary_intb) << std::endl;
	std::cout << "               ----"<< std::endl;
	std::cout << "Результат      "  << std::bitset<4>( binary_inta & binary_intb) << "\n" << std::endl;

	std::cout << "\n" << "Таблица бинарных значений операции |" << std::endl;
	std::cout << "Первое число = "  << std::bitset<4>(binary_inta) << std::endl;
	std::cout << "Второе число = " << std::bitset<4>(binary_intb) << std::endl;
	std::cout << "               ----" << std::endl;
	std::cout << "Результат      " << std::bitset<4>(binary_inta | binary_intb) << "\n" << std::endl;

	std::cout << "\n" << "Таблица бинарных значений операции ^" << std::endl;
	std::cout << "Первое число = "  << std::bitset<4>(binary_inta) << std::endl;
	std::cout << "Второе число = "  << std::bitset<4>(binary_intb) << std::endl;
	std::cout << "               ----" << std::endl;
	std::cout << "Результат      " << std::bitset<4>(binary_inta ^ binary_intb) << "\n" << std::endl;

	





	/* 
	* \t, \n - т.е. escape - последовательности, управляющие символы
	* они кодируют вывод символов, которые нельзя набрать с клавиатуры (непечатные символы)
    * \t - один символ табуляции (при компиляции компилятор заменяет пару символов /t на один символ табуляции
	* \n - один символ переноса строки (при компиляции компилятор заменяет пару символов \n на один символ переноса строки
	* служебным символом для начала escape - последовательности является
	* если нужно употреблять сам по себе слеш '/' беp escape-последовательности
	* то следует в строке о коде писать '\\'
	* обратный слеш / - это просто символ и особого значения не имеет
	*/





	std::system("pause"); // вызов функции system() из стандартной библиотеки
	return 0;
}  