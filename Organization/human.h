#pragma once
#include<iostream>
#include<string>
using namespace std;

class human
{
	string name;
	int age;

public:
	human(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void setName(string name) { this->name = name; }
	void setAge(int string) { this->age = age; }
	int getAge()const { return age; }
	string getName()const { return name; }
	virtual void info()const
	{
		cout << "name: " << name << ", age: " << age << endl;
	}
};
