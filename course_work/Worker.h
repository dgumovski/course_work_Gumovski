#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Worker :public Person
{
public:
	Worker(int Salary, const string& Jobtitle, const string& Zavod, const string& firstName, const string& lastName,
		int day, int month, int year,
		double height, double weight, const string& country, const string& gender);
	void IncreaseSalary();
	void ChangeJobtitle(string Jobtitle);
	void Print() override;
	string GetJobtitle();
	int GetSalary();
	string GetZavod();
private:
	int Salary;
	string Zavod;
	string  Jobtitle;
};

