// ��������� � ������������. ������ 3. ����� ���������
#include<iostream>

// ��������� ��� �������� ������
struct Address
{
	std::string town;        // �������� ������
	std::string street;      // �������� �����
	int num_house;           // ����� ����
	int num_flat;            // ����� ��������
	int index;               // ������   
};

void printAddress(Address* ad);   // ������� ��� ������ ������

int main()
{
	setlocale(LC_ALL, "Russian");
	Address ad1{"������","�����",12,8,123456};
	Address ad2{"������","������",15,82,852096};
	printAddress(&ad1);
	printAddress(&ad2);
	
	return EXIT_SUCCESS;
}

// ������� ��� ������ ������
void printAddress(Address* ad)
{
	std::cout << "�����: " << ad->town << std::endl;
	std::cout << "�����: " << ad->street << std::endl;
	std::cout << "����� ����: " << ad->num_house << std::endl;
	std::cout << "����� ��������: " << ad->num_flat << std::endl;
	std::cout << "������: " << ad->index <<"\n " << std::endl;
}