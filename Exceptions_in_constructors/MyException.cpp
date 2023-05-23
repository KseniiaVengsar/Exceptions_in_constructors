
#include "MyException.h"

MyException::MyException(const char* why) : reason(why) {}

const char* MyException::what() const throw() {
	return reason.c_str();
}