#ifndef LEAVERDYNAMICLIB_H
#define LEAVERDYNAMICLIB_H

#include <string>
#include <iostream>

#ifndef  LEAVERDYNAMICLIB_EXPORT
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif // ! LEAVERDYNAMICLIB_EXPORT



namespace User
{
	class   Leaver
	{
	private:
		std::string str{};
	public:
		LEAVERDYNAMICLIB_API Leaver(std::string name);
		LEAVERDYNAMICLIB_API std::string leave();
	};
}

#endif // !LEAVERDYNAMICLIB_H

