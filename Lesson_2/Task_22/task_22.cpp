// 2. ������ � �������. ������� 2. �������
#include <iostream>
#include <windows.h>

// ����� �������
class Counter
{
	private: 
		int count{};    // ���������� �������

	public:
		
		// ����������� ��� ���������� (������)
		Counter()                
		{
			count = 1;
		}
		// ����������� � ���������� � ������� �������������
		Counter(int setCount) :count{ setCount }    
		{

		}
		// ����� ��� ���������� ��������
		void increment()
		{
			++count;
		}
		// ����� ��� ���������� ��������
		void decrement()
		{
			--count;
		}
		// ����� ��� ������ �������� ��������� ��������
		void print_count()
		{
			std::cout << count << std::endl;
		}
};

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251);

	int num{};
	std::string otvet{};

	Counter* count = nullptr;
		
	do
	{
		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		std::cin >> otvet;

		if (otvet == "��")
		{
			std::cout << "������� ��������� �������� ��������: ";
			std::cin >> num;
			count = new Counter(num);
		}
		else if (otvet == "���")
		{
			count = new Counter();
		}
	} 
	while ((otvet != "��") && (otvet != "���"));

	char ch;
	std::string str;
		do
		{
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			std::cin >> str;
			ch = str[0];               // ����� �� ������ ������ ������ ������ (��� ������, ���� ����� ������� ������, � �� ��������� ������)
			switch (ch)
			{
			case '+':
				count->increment();    // ����� ������ ��� ���������� ��������
				break;
			case '-':
				count->decrement();    // ����� ������ ��� ���������� ��������
				break;
			case '=':
				count->print_count();  // ����� ������ ��� ����������� �������� �������� ��������
				break;
			case 'x':                  // ��������� �������
				break;
			default:
				std::cout << "������������ ���� ������� ('+', '-', '=' ��� 'x')!!! \n";
				break;
			}
		} while (ch != 'x');

		delete count;
	
	return EXIT_SUCCESS;
}