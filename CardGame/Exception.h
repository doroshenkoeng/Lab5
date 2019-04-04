#pragma once
#include <string>
class Exception
{
public:
	Exception(std::string exceptionName);
	std::string getExceptionName();
private:
	std::string mExceptionName;
};

