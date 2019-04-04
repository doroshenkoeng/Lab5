#pragma once
#include <string>
//! Класс исключений
class Exception
{
public:
	//! Конструктор с одним аргментом.
	/*!
		\param exceptionName Название ошибки.
	*/
	Exception(std::string exceptionName);
	//! Геттер названия ошибки.
	/*!
		\return std::string Название ошибки.
	*/
	std::string getExceptionName();
private:
	//! Поле хранящее название ошибки.
	std::string mExceptionName;
};

