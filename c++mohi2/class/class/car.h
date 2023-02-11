#pragma once
class car
{
private:
    int maker;
	

public:
	car(int m);
	

	~car();
	
	int getm();
	void setmaker(int );



	car operator +(car c2);
	

	

};

