#pragma once
#include "employer.h"
class designer :
	public employer
{
	int cntProg;
public:
	designer(string name, int age, int exp, int cntProg)
		:employer(name, age, exp)
	{
		this->cntProg = cntProg;
	}
	double getCoeff()const override
	{
		double expCoeff = (double)this->getEx() *0.1;
		double cntLangsCoeff = (double)cntProg / 6;
		return 1 + expCoeff + cntLangsCoeff;
	}
	void setCntProg(int cnt) { this->cntProg = cnt; }
	int getCntProg()const { return this->cntProg; }
	void info()const override
	{
		cout << "name: " << getName() << ", age: " << getAge() << endl;
		cout << "Experience: " << getEx() << " years" << endl;
		cout << "Count of programs: " << cntProg << endl;
	}
};