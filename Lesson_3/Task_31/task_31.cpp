//  ���. ���������� � ������������. ������� 1. ������
#include <iostream>
#include <fstream>
#include <windows.h>

// ���������� ������ Address
class Address
{
	private:
		std::string town{};          // �������� ������
		std::string street{};        // �������� �����
		std::string home{};          // ����� ����
		std::string flat{};          // ����� ��������

	public:
	
		// ����������� � �����������
		Address(std::string setTown, std::string setStreet, std::string setHome, std::string setFlat) : town{ setTown }, street{ setStreet }, home{ setHome }, flat{ setFlat }
		{};
		// ����������� ��� ����������
		Address() {};

		// ����� �� ����� ������ ������
		std::string get_output_address()
		{
			return town + ", " + street + ", " + home + ", " + flat;
		}
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int num{};
	std::string town{};
	std::string street{};
	std::string home{};
	std::string flat{};
	std::ifstream fin{"in.txt"};
	if (fin.is_open())                       // �������� ����� �� ������
	{
		if (fin >> num)
		{
			Address* a = new Address[num];   // ������������ ������ ��� �������� ������� (��� ������������ ����������� �� ���������)
			for (int i = {}; i < num; ++i)
			{
				fin >> town;
				fin >> street;
				fin >> home;
				fin >> flat;
				a[i] = Address{ town ,street ,home ,flat };    //  ��� ����� � ����������� �������
			}

			std::ofstream fout{ "out.txt" };
			if (fout.is_open())             // �������� ����� �� ������
			{
				fout << num << std::endl;
				for (int i = {}; i < num; ++i)
					fout << a[i].get_output_address() << std::endl;
			}
			else
			{
				std::cout << " ������ �������� ����� out.txt !!!" << std::endl;
			}
			fout.close();
			delete[] a;                    // ������������ ������
		}
		else
		{
			std::cout << " ������ ������ ����� in.txt !!!" << std::endl;
		}
	}
	else
	{
		std::cout << " ������ �������� ����� in.txt !!!" << std::endl;
	}
	fin.close();

	return EXIT_SUCCESS;
}