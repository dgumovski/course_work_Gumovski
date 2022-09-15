#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;



 

class Person
{
public:
   
    Person(const string& firstName, const string& lastName,
        int day, int month, int year,
        double height, double weight, const string& gender,
        const string& country);

    string GetfirstName();
    string GetlastName();
    int Getday();
    int Getmonth();
    int Getyear();
    double Getheight();
    double Getweight();
    string Getcountry();
    string Getgender();
    


    void ChangeCountry(const string& country);
    bool IsHeightMore200cm();
    bool livesInUkraine();
    virtual void Print();

   
   

private:
        string firstName;
        string lastName;
        int day;
        int month;
        int year;
        double height;
        double weight;
        string country;
        string gender;
     
        
      
};


