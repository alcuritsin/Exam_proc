#include<iostream>

//using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Asscci 0 - 255\n\n";
	int counter_to_down = 256; //������������ �������� ��������.

	int counter_to_up = 0; //��� ���� ����� ������� ���������� �� �����������

	while (counter_to_down--)
	{
		std::cout << counter_to_up << " = " << (char)counter_to_up << "  ";
		counter_to_up++;
	}
}