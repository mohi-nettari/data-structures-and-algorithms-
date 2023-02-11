#pragma once
using namespace std;

class student
{
private:
	int num;

public:
	student();
	
	void setnum(int a);
	int getnum();

	student add(student s2);
		
	~student();
};

