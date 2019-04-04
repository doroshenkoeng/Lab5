#pragma once
#include <string>
//! ����� ����������
class Exception
{
public:
	//! ����������� � ����� ���������.
	/*!
		\param exceptionName �������� ������.
	*/
	Exception(std::string exceptionName);
	//! ������ �������� ������.
	/*!
		\return std::string �������� ������.
	*/
	std::string getExceptionName();
private:
	//! ���� �������� �������� ������.
	std::string mExceptionName;
};

