
#include <iostream>
#include <string>

using namespace std;

// ����-1, ������������ ���
/*int perviy()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double a[2];
	double b[2];
	double result[3];
	cout << "������� 3 ���������� ������� a := " << endl;
	for (i = 0; i < 3; i++)
		cin >> a[i];
	cout << "������� 3 ���������� ������� b : = " << endl;
	for (i = 0; i < 3; i++)
		cin >> b[i];
	for (i = 0; i < 3; i++)
		result[1] = (a[1] * b[2]) - (a[2] * b[1]);
		result[2] = (a[2] * b[0]) - (a[0] * b[2]);
		result[3] = (a[0] * b[1]) - (a[1] * b[0]);

		cout << "��������� ������������ �������� a � b : = " << endl;
	cout << "x: " << result[1] << endl;
	cout << "y: " << result[2] << endl;
	cout << "z: " << result[3] << endl;

	system("pause");
	return 0;
}

*/

class metod
{
public:
	double a[3];
	double b[3];
	double result[3];
	string name;
	void first()
	{
		cout << "������� 3 ���������� ������� a := " << endl;
		cout << "x1 := ";
		cin >> a[0];
		cout << "y1 := ";
		cin >> a[1];
		cout << "z1 := ";
		cin >> a[2];
	
	}
	void second()
	{
		cout << "������� 3 ���������� ������� b : = " << endl;
		cout << "x2 := ";
		cin >> b[0];
		cout << "y2 := ";
		cin >> b[1];
		cout << "z2 := ";
		cin >> b[2];
	}
	double res()
	{
		result[0] = (a[1] * b[2]) - (a[2] * b[1]);
		result[1] = (a[2] * b[0]) - (a[0] * b[2]);
		result[2] = (a[0] * b[1]) - (a[1] * b[0]);
		return 0;
		
	}
	double vivod()
	{
		cout << "��������� ������������ �������� a � b : = " << endl;
		cout << "x: " << result[0] << endl;
		cout << "y: " << result[1] << endl;
		cout << "z: " << result[2] << endl;
		return 0;
		
	}
	
	
};
int main()
{
	setlocale(LC_ALL, "Russian");
	//perviy();
	metod vector;
	vector.first();
	vector.second();
	vector.res();
	vector.vivod();
	return 0;
	system("pause");
}