#include "LeaverDynamicLib.h"

User::Leaver::Leaver(std::string name) : str{ name }
{

}


std::string User::Leaver::leave()
{
	return  std::string("До свидания, " + str + "!");
}