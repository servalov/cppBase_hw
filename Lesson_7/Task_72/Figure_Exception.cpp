#include "Figure_Exception.h"

FigureException::FigureException(std::string setError) : std::domain_error{ setError }, error{setError}
{
}

const char* FigureException::what() const noexcept
{
	return error.c_str();
}