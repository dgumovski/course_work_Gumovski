#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;
class Professor : public Person
{
public:
	Professor(const string& University, const string& Subject, const string& Cafedra, const string& Degree,int Experience,  int Salary, int CountOfWorks,const string& firstName, const string& lastName,
		int day, int month, int year,
		double height, double weight, const string& gender,
		const string& country);
	void CalculationOfWage();
	void AwardDegree();
	void Print() override;
	string GetUniversity();
	string GetSubject();
	string GetCafedra();
	string GetDegree();
	int GetExperience();
	int GetSalary();
	int GetCountOfWorks();
private:
	string University;
	string Subject;
	string Cafedra;
	string Degree;
	int Experience;
	int Salary;
	int CountOfWorks;

};

