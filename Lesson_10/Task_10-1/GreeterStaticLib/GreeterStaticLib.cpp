#include "GreeterStaticLib.h"

User::Greeter::Greeter(std::string name): str{name}
{
}

User::Greeter::~Greeter()
{

}

std::string User::Greeter::greet()
{
	return  std::string("Здравствуйте, "+str+ "!");
}
