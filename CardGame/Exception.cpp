#include "Exception.h"




Exception::Exception(std::string exceptionName)
{
	mExceptionName = exceptionName;
}

std::string Exception::getExceptionName()
{
	return mExceptionName;
}
