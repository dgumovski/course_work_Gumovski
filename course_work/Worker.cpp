#include "Worker.h"

Worker::Worker ( int Salary, const string& Jobtitle, const string& Zavod,const string& firstName, const string& lastName,
	int day, int month, int year,
	double height, double weight, const string& country, const string& gender)   :Person(firstName, lastName, day, month, year, height,
		weight, country, gender)
	
{
	this->Salary = Salary;
	this->Jobtitle = Jobtitle;
	this->Zavod = Zavod;
}

void Worker::IncreaseSalary()
{
	if (Jobtitle == "turner")
	{
		Salary = Salary + 2000;
	}
	else if (Jobtitle == "manager")
	{
		Salary = Salary + 3000;
	}
	else if (Jobtitle == "main_eingeer")
	{
		Salary = Salary + 4000;
	}
	else if (Jobtitle == "director")
	{
		Salary = Salary + 7000;
	}
	else if (Jobtitle == "none")
	{
		Salary = Salary;
	}
	else
	{
		cout << "incorrect Jobtitle" << endl;
	}

}
void Worker::ChangeJobtitle(string Jobtitle)
{
	this->Jobtitle = Jobtitle;
}

void Worker::Print()

{
	cout << "Должность: " << GetJobtitle() << " Оклад: " << GetSalary() << " Завод: " << GetZavod() <<  " ";
	Person::Print();
	
}

string Worker:: GetJobtitle()
{
	return  Jobtitle;
}
int Worker::GetSalary()
{
	return Salary;
}

string Worker::GetZavod()
{
	return Zavod;
}



