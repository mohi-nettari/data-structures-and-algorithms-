#pragma once
#include <string>
#include<iostream>
class persone
{
private:
	std::string name;
	std::string gender;
	int age;


	public:
		persone();
		persone(std::string n, std::string g, int a );
		~persone();
		void setname (std::string n);
		std::string getname();
		void setgender(std::string g);
		std::string getgender();
		void setage(int a);
		int getage();


};

