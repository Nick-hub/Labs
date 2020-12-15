#include <iostream> // - ������������ ���� ��� cout, << � ����� ���� ���
#include <locale.h> // - ������������ ���� ��� ������� setlocale()
#include <iomanip> // - ������������ ���� ��� ������� ���������� ������� bin(), hex() � ��.
#include <bitset>
// ���� 1. ��������� C/C++, �������� ����������� ��������� C/C++

// main - ��-������ - �������, ��-������ - ����� �����
// �� ���� ��������� ������ ���� ������ ���� ������� main()
int main() 
{ 
	// ����� ���� � ��������, ����������, � ������ ����� �������� ������� ���� �� C/C++ ���������� ��������� ��������

	/* ������������� ����������
	* 1. �������������� (+, -, *, /, % - ������� �� ������ �������)
	*    �) ���������� ��� ������ (|| - �������� "���", && - �������� "�")
	                              ++ - ��������� �� �������, ��� "���������"
								  -- - ��������� �� �������, ��� "���������"
	*    �) �������� (& - �������� "�", | - �������� "���")
	*    �) ��������� ��������� (> - ������, < - ������, == - �����)
	                            (>= - ������ ��� �����, <= - ������ ��� �����)
	*
	*/
	setlocale(LC_ALL, "Russian");
	int a = 10;
	int b = 3;
	int result = 10 % 3;
	std::cout
		<< "������������ ������ 1. ��������� C / C++, "
		   "�������� ����������� ��������� C / C++"
		<< std::endl;
	std::cout << "a = 10, b = 3" << std::endl; // endl - ������ ������� �� ���������
	std::cout << "10 % 3 = " << 10 % 3 << "\n"; // \n - �� �� �����, ��� � std::endl

	std::cout << "\n" << "������� �������� �������� &&" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true && true) << "\t\t" << (true && false) << std::endl;
	std::cout << "a = false" << "\t" << (false && true) << "\t\t" << (false && false) << "\n" << std::endl;

	std::cout << "������� �������� �������� ||" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true || true) << "\t\t" << (true || false) << std::endl;
	std::cout << "a = false" << "\t" << (false || true) << "\t\t" << (false || false) << std::endl;



	int binary_int = 0b1010;

	std::cout << "\n" << "\n" << "\n" << "\n" << "�������� ����� = binary_int " << std::bitset<8>(binary_int) << "\n" << std::endl;
	int binary_inta = 0b1010;
	int binary_intb = 0b1100;
	std::cout << "\n" << "������� �������� �������� �������� &" << std::endl;
	std::cout << "������ ����� = "  <<std::bitset<4>(binary_inta) << std::endl;
	std::cout << "������ ����� = "  << std::bitset<4>(binary_intb) << std::endl;
	std::cout << "               ----"<< std::endl;
	std::cout << "���������      "  << std::bitset<4>( binary_inta & binary_intb) << "\n" << std::endl;

	std::cout << "\n" << "������� �������� �������� �������� |" << std::endl;
	std::cout << "������ ����� = "  << std::bitset<4>(binary_inta) << std::endl;
	std::cout << "������ ����� = " << std::bitset<4>(binary_intb) << std::endl;
	std::cout << "               ----" << std::endl;
	std::cout << "���������      " << std::bitset<4>(binary_inta | binary_intb) << "\n" << std::endl;

	std::cout << "\n" << "������� �������� �������� �������� ^" << std::endl;
	std::cout << "������ ����� = "  << std::bitset<4>(binary_inta) << std::endl;
	std::cout << "������ ����� = "  << std::bitset<4>(binary_intb) << std::endl;
	std::cout << "               ----" << std::endl;
	std::cout << "���������      " << std::bitset<4>(binary_inta ^ binary_intb) << "\n" << std::endl;

	





	/* 
	* \t, \n - �.�. escape - ������������������, ����������� �������
	* ��� �������� ����� ��������, ������� ������ ������� � ���������� (���������� �������)
    * \t - ���� ������ ��������� (��� ���������� ���������� �������� ���� �������� /t �� ���� ������ ���������
	* \n - ���� ������ �������� ������ (��� ���������� ���������� �������� ���� �������� \n �� ���� ������ �������� ������
	* ��������� �������� ��� ������ escape - ������������������ ��������
	* ���� ����� ����������� ��� �� ���� ���� '/' ��p escape-������������������
	* �� ������� � ������ � ���� ������ '\\'
	* �������� ���� / - ��� ������ ������ � ������� �������� �� �����
	*/





	std::system("pause"); // ����� ������� system() �� ����������� ����������
	return 0;
}  