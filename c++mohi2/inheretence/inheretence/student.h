#pragma once
#include<string>
#include "persone.h"
class student : public persone
{
private:
	int mo;
	std::string  teacher;
public:
	student();
	~student();
	void setmo(int m);
	int getmo();
	void settea(std::string t);
	std::string gettea();

};