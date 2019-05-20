#pragma once
#include"employer.h"
#include<vector>

class organization
{
	vector<employer*> emps;
	int salary;
	string name;
public:
	organization(string name, int salary)
	{
		this->name = name;
		this->salary = salary;
	}
	organization(const organization&) = delete;
	organization& operator=(const organization&) = delete;

	void setSalary(int salary) { this->salary = salary; }
	void setName(string name) { this->name = name; }
	string getName()const { return name; }
	int getSalary()const { return salary; }

	void info()const
	{
		cout << "Organization " << name << " Total salary: " << salary << "$" << endl;
		for (employer*e : emps)
		{
			cout << "--------------------" << endl;
			cout << "Position: " << string(typeid(*e).name()).substr(6) << endl;

			e->info();
			cout << "Salary = " << e->getCoeff()*salary << "$" << endl;
		}
	}

	void deleteEmployer(int pos)
	{
		vector<employer*> tmp;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (i == pos)
			{
				continue;
			}
			tmp.push_back(emps[i]);
		}
		emps = tmp;
	}

	void addEmployer(employer*e)
	{
		emps.push_back(e);
	}

	double getAllSalary()
	{
		double allCoeff = 0;
		for (employer*e : emps)
		{
			allCoeff += e->getCoeff();
		}
		return allCoeff * salary;
	}

	~organization()
	{
		for (employer*e : emps)
		{
			delete e;
		}
	}
};
