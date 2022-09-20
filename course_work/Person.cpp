#include "Person.h"

string Person::GetfirstName()
{
	return firstName;
}
string Person::GetlastName()
{
	return lastName;
}
int Person::Getday()
{
	return day;
}
int Person::Getmonth()
{
	return month;
}
int Person::Getyear()
{
	return year;
}
double Person::Getheight()
{
	return height;
}
double Person::Getweight()
{
	return weight;
}
string Person::Getcountry()
{
	return country;
}
string Person::Getgender()
{
	return gender;
}
Person::Person (const string& firstName, const string& lastName,
	int day, int month, int year,
	double height, double weight,const string& gender, const string& country)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->day = day;
	this->month = month;
	this->year = year;
	this->height = height;
	this->weight = weight;
	this->country = country;
	this->gender = gender;	
}
void Person::ChangeCountry(const string& country)
{
	this->country = country;
}

bool Person::IsHeightMore200cm()
{
	if (height > 200)
	{
		cout << "��� ���� ������, ��� 200 ��" << endl;
		return height > 200;
	}
	else
	{
		cout <<  "��� ���� ������, ��� 200 ��" << endl;
		return height < 200;
	}
}
bool Person::livesInUkraine()
{
	if (country == "Ukraine" || country == "UA"
		|| country == "�������" || country == "������")
	{
		cout << "������ �������� �������� ������� �������" << endl;
		return  country == "Ukraine" || country == "UA"
			|| country == "�������" || country == "������";
	}
	else
	{
		cout << "������ �������� �� �������� ������� �������" << endl;
		return country != "Ukraine" || country != "UA"
			|| country != "�������" || country != "������";
	}
	
}
void Person::Print()
{
	cout << " �������: " << GetfirstName() << " ���: "
		<< GetlastName() << " ����: " << Getday() << " �����: " << Getmonth() << " ���: " 
		<< Getyear() << " ����: " << Getheight() <<  " ���: " 
		<< Getweight() << " ������: " << Getcountry() << " ���: " << Getgender()  << endl;
}



