#pragma once
#include "employer.h"
class admin :
	public employer
{
	int cntServers;
	int cntComp;
public:
	admin(string name, int age, int ex, int cntServers, int cntComp)
		:employer(name, age, ex)
	{
		this->cntServers = cntServers;
		this->cntComp = cntComp;
	}
	double getCoeff()const override
	{
		double expCoeff = (double)this->getEx() *0.15;
		double cntLangsCoeff = (double)cntServers / 4;
		double cntCompCoeff = (double)cntComp / 100;
		return 1 + expCoeff + cntLangsCoeff + cntCompCoeff;
	}
	int getCntServers()const { return cntServers; }
	int getCntComp()const { return cntComp; }
	void setCntServers(int cnt) { this->cntServers = cnt; }
	void setCntComp(int cnt) { this->cntComp = cnt; }
	void info()const override
	{
		cout << "name: " << getName() << ", age: " << getAge() << endl;
		cout << "Experience: " << getEx() << " years" << endl;
		cout << "Count of Servers: " << cntServers << endl;
		cout << "Count of Computers: " << cntComp << endl;

	}
};
