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
		cout << "Ваш рост больше, чем 200 см" << endl;
		return height > 200;
	}
	else
	{
		cout <<  "Ваш рост меньше, чем 200 см" << endl;
		return height < 200;
	}
}
bool Person::livesInUkraine()
{
	if (country == "Ukraine" || country == "UA"
		|| country == "Украина" || country == "Україна")
	{
		cout << "Данная личность является жителем Украины" << endl;
		return  country == "Ukraine" || country == "UA"
			|| country == "Украина" || country == "Україна";
	}
	else
	{
		cout << "Данная личность не является жителем Украины" << endl;
		return country != "Ukraine" || country != "UA"
			|| country != "Украина" || country != "Україна";
	}
	
}
void Person::Print()
{
	cout << " Фамилия: " << GetfirstName() << " Имя: "
		<< GetlastName() << " День: " << Getday() << " Месяц: " << Getmonth() << " Год: " 
		<< Getyear() << " Рост: " << Getheight() <<  " Вес: " 
		<< Getweight() << " Страна: " << Getcountry() << " Пол: " << Getgender()  << endl;
}



