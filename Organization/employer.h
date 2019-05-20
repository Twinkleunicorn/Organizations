#pragma once
#include "human.h"
class employer abstract :
	public human
{
	int experience;

public:
	employer(string name, int age, int ex)
		:human(name, age)
	{
		this->experience = ex;
	}
	int getEx()const { return experience; }
	void setEx(int ex) { this->experience = ex; }
	virtual double getCoeff()const = 0;
	void info()const override
	{
		cout << "Name: " << getName() << ", age: " << getAge() << endl << "Experience: " << this->experience << " years" << endl;
	}
};
