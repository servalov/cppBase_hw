#ifndef GREETERSTATICLIB_H
#define GREETERSTATICLIB

#include <string>

namespace User
{
	class Greeter
	{
		private:
			std::string str;
		public:
			Greeter(std::string name);
			~Greeter();
			std::string greet();
	};
}

#endif // !GREETERSTATICLIB_H
