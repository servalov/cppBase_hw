#pragma once

#include <iostream>
#include <stdexcept>

// ����� ���������� ��� ������ �������� �������������� ������
class FigureException : public std::domain_error
{
private:
	std::string error{};
public:
	FigureException(std::string setError);

	const char* what() const noexcept override;

};
