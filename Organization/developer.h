#pragma once
#include "employer.h"
class developer :
	public employer
{
	int cntLangs;
public:
	developer(string name, int age, int ex, int langs)
		:employer(name, age, ex)
	{
		this->cntLangs = langs;
	}

	double getCoeff()const override
	{
		double expCoeff = (double)this->getEx() *0.3;
		double cntLangsCoeff = (double)cntLangs / 2;
		return 1 + expCoeff + cntLangsCoeff;
	}
	int getCntLangs()const { return cntLangs; }
	void setCntLangs(int cntLangs) { this->cntLangs = cntLangs; }
	void info()const override
	{
		cout << "name: " << getName() << ", age: " << getAge() << endl;
		cout << "Experience: " << getEx() << " years" << endl;
		cout << "Count of Languages: " << cntLangs << endl;
	}
};