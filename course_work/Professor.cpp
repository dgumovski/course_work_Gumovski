#include "Professor.h"
Professor::Professor(const string& University, const string& Subject, const string& Cafedra, const string& Degree, int Experience, int Salary, int CountOfWorks, const string& firstName, const string& lastName,
	int day, int month, int year, double height, double weight,
	const string& gender, const string& country) : Person(firstName, lastName, day, month, year, height,
		weight, country, gender)
{
	this->University = University;
	this->Subject = Subject;
	this->Cafedra = Cafedra;
	this->Degree = Degree;
	this->Experience = Experience;
	this->Salary = Salary;
	this->CountOfWorks = CountOfWorks;
}
void Professor::CalculationOfWage()
{
	if (Experience <5 ||Degree == "candidat")
	{
		Salary = Salary + 1000;
	}
	else if (Experience < 5 || Degree == "doctor")
	{
		Salary = Salary + 4000;
	}
	else if (Experience > 5 || Degree == "candidat")
	{
		Salary = Salary + 3000;
	}
	else if (Experience > 5 || Degree == "doctor")
	{
		Salary = Salary + 6000;
	}
}
void Professor::AwardDegree()
{
	if (CountOfWorks <= 8)
	{
		Degree = "candidat";
	}
	else if (CountOfWorks > 8)
	{
		Degree = "doctor";
	}
}
void Professor::Print()
{
	cout << "Университет: " << GetUniversity() << " Предмет: " << GetSubject() << " Кафедра: " << GetCafedra() << " Академ. степень: " << GetDegree() << " Стаж: " << GetExperience()<<  " Оклад: " << GetSalary() << " Количество работ: " << GetCountOfWorks() << " ";
	Person::Print();
}
string Professor::GetUniversity()
{
	return University;
}
string Professor::GetSubject()
{
	return Subject;
}
string Professor::GetCafedra()
{
	return Cafedra;
}
string Professor::GetDegree()
{
	return Degree;
}
int Professor::GetExperience()
{
	return Experience;
}
int Professor::GetSalary()
{
	return Salary;
}
int Professor::GetCountOfWorks()
{
	return CountOfWorks;
}

