#pragma once

#include <exception>
#include <string>

class MyException : public std::exception {
private:
	std::string reason;

public:
	MyException(const char* why);
	virtual const char* what() const throw();
};