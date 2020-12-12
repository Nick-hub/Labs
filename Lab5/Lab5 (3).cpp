#include <iostream> // - заголовочный файл для cout, << и много чего ещё
#include <locale.h> // - заголовочный файл для функции setlocale()
#include <iomanip> // - заголовочный файл для функций управления печатью bin(), hex() и др.
#include <bitset>

class car // игровое транспортное средство
{
private: // все, что ниже до следующего спецификатора, будет private
	double max_speed = 120; // свойство, недоступное извне
	double fuel_consumptoin; // свойство, недоступное извне
	double current_speed; // 
	char regnumber[6] = { 0 }; //
	unsigned char capacity; //
	double get_coordinate() { return 0.0; } //  метод, недопустимый извне
	std::string color = "green";
public:
	car() {}
	void change_color(std::string pColor); // метод, определенный снаружи
	bool accelerate(double v) // метод, определенный внутри класса
	{
		if (v <= this->max_speed)
		{
			this->current_speed = v;
			return true;
		}
		else
			return false;
	}


	class animal_parameters
	{
	public:
		int age = 5;
		double weight = 10.4;
		double current_speed = 0;
		unsigned char name[6] = { 0 };


	};







}
