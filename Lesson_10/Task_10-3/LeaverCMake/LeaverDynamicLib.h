#ifndef LEAVERDYNAMICLIB_H
#define LEAVERDYNAMICLIB_H

#include <string>
#include <iostream>

namespace User
{
	class  Leaver
	{
	private:
		std::string str{};
	public:
		 Leaver(std::string name);
		 std::string leave();
	};
}

#endif 

