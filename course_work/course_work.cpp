#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Worker.h"
#include "Professor.h"
#include "Person.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	

	vector<Person*> person;
	vector<Worker*> worker;
	vector<Professor*> professor;
	 int variant_ofmenu ;
	while (true)
	{
		    cout << "Добрый день, выберите пункт меню"
			<< "\n1.Человек"
			<< "\n2.Рабочий"
			<< "\n3.Преподаватель"
			<< "\n4.Выход" << endl;
			cin >> variant_ofmenu;
			switch (variant_ofmenu)
			{
					case 1: // person
					{
							int variant_of_menuPerson;
							cout << "Выберите опцию с классом Человек:"
							<< "\n1.Вывести информацию"
							<< "\n2.Создать"
							<< "\n3.Удалить"
							<< "\n4.Проверка роста"
							<< "\n5.Живет ли в Украине?"
							<< "\n6.Смена страны проживания"
							<< "\n7.Выход" << endl;
							cin >> variant_of_menuPerson;
							switch (variant_of_menuPerson)
							{
									case 1:
									{
										if (person.size() > 0)
										{
											int countofpeople;
											cout << "Выберите вариант вывода человека: " << "\n1.Вывести одного человека." << "\n2. Вывести всех людей." << endl;
											cin >> countofpeople;
											switch (countofpeople)
											{
											case 1:
											{
												int i, x;
												cout << "Вывод человека" << endl;
												cout << "Введите номер человека: " << endl;
												cin >> i;
												x = i - 1;
												cout << i << ")."; person.at(x)->Print();
												break;
											}
												
											case 2:
											{
												cout << "Вывод людей" << endl;
												for (int i = 0; i < person.size(); i++)
												{
													cout << i << ")."; person.at(i)->Print();
												}
												break;
											}
												
											default:
												cerr << "Вы выбрали неверный вариант" << endl;
												cout << "=========================== " << endl;
												system("pause");
												exit(EXIT_FAILURE);
												break;
											}
										}
										else
										{
											cout << "Нет людей!" << endl;
										}
										cout << "=========================== " << endl;
										break;
									}

									case 2:
									{

										cout << "Создание нового человека " << endl;
										string firstName;
										string lastName;
										int day{};
										int month{};
										int year{};
										double height{};
										double weight{};
										string country;
										string gender;
											cout << "Введите фамилию человека " << endl;cin >> firstName;
											cout << "Введите имя человека " << endl;cin >> lastName;
											cout << "Введите день рождения " << endl;cin >> day;
											cout << "Введите месяц рождения " << endl;cin >> month;
											cout << "Введите год рождения " << endl;cin >> year;
											cout << "Введите рост человека " << endl;cin >> height;
											cout << "Введите вес человека " << endl;cin >> weight;
											cout << "Введите страну проживания " << endl;cin >> country;
											cout << "Введите пол " << endl;cin >> gender;
											person.push_back(new Person(firstName,lastName, day,month,year,height,weight,country,gender));
										cout << "=========================== " << endl;
										break;
									}

									case 3:
									{	
										if (person.size() > 0)
										{
											int i,x;
											cout << "Удаление человека: " << endl;
											cout << "Выберите номер человека, которого хотите удалить: " << endl;
											cin >> i;
											x = i - 1;
												person.erase(person.begin() + x);
												cout << "Человек удален" << endl;
										}
										else
										{
											cout << "Нет людей!" << endl;
										}
										cout << "=========================== " << endl;
										break;
									}

									case 4:
									{	
										if (person.size() > 0)
										{
											int i, x;
											cout << "Введите номер человека" << endl;
											cin >> i;
											x = i - 1;
											cout << "Проверка роста: " << endl;
												person.at(x)->IsHeightMore200cm();	
										}
										else
										{
											cout << "Нет людей!" << endl;
										}
										cout << "=========================== " << endl;
										break;
									}

									case 5:
									{
										if (person.size() > 0)
										{
											int i, x;
											cout << "Введите номер человека" << endl;
											cin >> i;
											x = i - 1;
											cout << "Живет ли человек в Украине" << endl;
											person.at(x)->livesInUkraine();
										}
										else
										{
											cout << "Нет людей!" << endl;
										}
										cout << "=========================== " << endl;
										break;

									}

									case 6:
									{
										if (person.size() > 0)
										{
											string country;
											int i, x;
											cout << "Введите номер человека" << endl;
											cin >> i;
											x = i - 1;
											cout << "Введите страну ,которую хотите сменить" << endl;
											cin >> country;
												person.at(x)->ChangeCountry(country);
										}
										else
										{
											cout << "Нет людей!" << endl;
										}
										cout << "=========================== " << endl;
										break;
									}

									case 7:
									{
										cout << "Выход из программы..." << endl;
										system("pause");
										exit(EXIT_SUCCESS);
										break;

									}

									default:
									{
										cerr << "Вы выбрали неверный вариант" << endl;
										cout << "=========================== " << endl;
										system("pause");
										exit(EXIT_FAILURE);
										break;
									}
							}
							break;
					}

					case 2: //worker
					{
							int variant_of_menuWorker;
							cout << "Выберите опцию с классом Рабочий:"
								<< "\n1.Вывести информацию"
								<< "\n2.Создать"
								<< "\n3.Удалить"
								<< "\n4.Увеличить зарплату"
								<< "\n5.Смена должности"
								<< "\n6.Выход" << endl;
							cin >> variant_of_menuWorker;
							switch (variant_of_menuWorker)
							{
									case 1:
									{
										if (worker.size() > 0)
										{
											int countofpeople;
											cout << "Выберите вариант вывода работника: " << "\n1.Вывести одного работника." << "\n2. Вывести всех работников." << endl;
											cin >> countofpeople;
											switch (countofpeople)
											{
												case 1:
													int i,x;
													cout << "Вывод работника" << endl;
													cout << "Введите номер работника: " << endl;
													cin >> i;
													x = i - 1;
													cout << i << ")." << " "; worker.at(x)->Print();
													break;
												case 2:
													cout << "Вывод работников" << endl;
													for (int i = 0; i < worker.size(); i++)
													{
														cout << i <<")."<< " "; worker.at(i)->Print();
													}
													break;
												default:
													cerr << "Вы выбрали неверный вариант" << endl;
													cout << "=========================== " << endl;
													system("pause");
													exit(EXIT_FAILURE);
													break;
											}
										}
										else
										{
											cout << "Нет работников!" << endl;
										}
										cout << "=========================== " << endl;
										break;
									}

									case 2:
									{

										cout << "Создание нового работника " << endl;
										string firstName;
										string lastName;
										int day{};
										int month{};
										int year{};
										double height{};
										double weight{};
										string country;
										string gender;
										int Salary{};
										string Jobtitle;
										string Zavod;
										cout << "Введите фамилию работника " << endl;
										cin >> firstName;
										cout << "Введите имя работника " << endl;
										cin >> lastName;
										cout << "Введите день рождения " << endl;
										cin >> day;
										cout << "Введите месяц рождения " << endl;
										cin >> month;
										cout << "Введите год рождения " << endl;
										cin >> year;
										cout << "Введите рост работника " << endl;
										cin >> height;
										cout << "Введите вес работника " << endl;
										cin >> weight;
										cout << "Введите страну проживания " << endl;
										cin >> country;
										cout << "Введите пол" << endl;
										cin >> gender;
										cout << "Введите оклад" << endl;
										cin >> Salary;
										cout << " Введите должность" << endl;
										cin >> Jobtitle ;
										cout << "Введите название завода" << endl;
										cin.ignore(256, '\n');
										getline(cin, Zavod);
										worker.push_back(new Worker (Salary, Jobtitle, Zavod , firstName,lastName, day, month, year, height, weight, country, gender));
										cout << "=========================== " << endl;
										break;
									}

									case 3:
									{
										if (worker.size() > 0)
										{

											int i,x;
											cout << "Удаление работника: " << endl;
											cout << "Выберите номер работника, которого хотите удалить: " << endl;
											cin >> i;
											x = i - 1;
											worker.erase(worker.begin() + x);
											cout << "работник удален" << endl;
										}
										else
										{
											cout << "Нет работников!" << endl;
										}
										cout << "=========================== " << endl;
										break;

									}
									case 4:
									{
										if (worker.size() > 0)
										{
											int i, x;
											cout << "Введите номер работнкиа " << endl;
											cin >> i;
											x = i - 1;
											cout << "Увеличение оклада: " << endl;
											worker.at(x)->IncreaseSalary();
										}
										else
										{
											cout << "Нет работников!" << endl;
										}
										cout << "=========================== " << endl;
										break;
									}
									case 5:
									{
										int i,x;
										cout << " Введите номер работнка, которому будете менять должность " << endl;
										cin >> i;
										x = i - 1;
										string Jobtitle;
										cout << "Введите должность ,которую хотите сменить" << endl;
										cin >> Jobtitle;
										worker.at(x)->ChangeJobtitle(Jobtitle);
										cout << "=========================== " << endl;
										break;
									}
									case 6:
									{
										cout << "Выход из программы..." << endl;
										system("pause");
										exit(EXIT_SUCCESS);
										break;
									}

									default:
									{
										cerr << "Вы выбрали неверный вариант" << endl;
										cout << "=========================== " << endl;
										system("pause");
										exit(EXIT_FAILURE);
										break;
									}

							}
							break;

					}
							
					case 3: // professor
					{
								int variant_of_menuProfessor;
								cout << "Выберите опцию с классом Преподаватель:"
								<< "\n1.Вывести информацию"
								<< "\n2.Создать"
								<< "\n3.Удалить"
								<< "\n4.Рассчитать зарплату"
								<< "\n5.Присудить степень"
								<< "\n6.Вывести всех преподавателей заданой кафедры"
								<< "\n7.Выход" << endl;
								cin >> variant_of_menuProfessor;
								switch (variant_of_menuProfessor)
								{
											case 1:
											{
												if (professor.size() > 0)
												{
													int countofpeople;
													cout << "Выберите вариант вывода преподавателя: " << "\n1.Вывести одного преподавателя." << "\n2. Вывести всех преподавателей." << endl;
													cin >> countofpeople;
													switch (countofpeople)
													{
													case 1:
														int i, x;
														cout << "Вывод преподавателя" << endl;
														cout << "Введите номер преподавателя: " << endl;
														cin >> i;
														x = i - 1;
														cout << i << ")." << " "; professor.at(x)->Print();
														break;
													case 2:
														cout << "Вывод преподавателя" << endl;
														for (int i = 0; i < professor.size(); i++)
														{
															cout << i << ")." << " "; professor.at(i)->Print();
														}
														break;
													default:
														cerr << "Вы выбрали неверный вариант" << endl;
														cout << "=========================== " << endl;
														system("pause");
														exit(EXIT_FAILURE);
														break;
													}
												}
												else
												{
													cout << "Нет преподавателей!" << endl;
												}
												cout << "=========================== " << endl;
												break;
											}

											case 2:
											{
												cout << "Создание нового преподавателя " << endl;
												string firstName;
												string lastName;
												int day{};
												int month{};
												int year{};
												double height{};
												double weight{};
												string country;
												string gender;
												string University;
												string Subject;
												string Cafedra;
												string Degree;
												int Experience {};
												int Salary{};
												int CountOfWorks{};
												cout << "Введите фамилию преподавателя " << endl;
												cin >> firstName;
												cout << "Введите имя преподавателя " << endl;
												cin >> lastName;
											    cout << "Введите день рождения " << endl;
												cin >> day;
												cout << "Введите месяц рождения " << endl;
												cin >> month;
												cout << "Введите год рождения " << endl;
												cin >> year;
												cout << "Введите рост преподавателя " << endl;
												cin >> height;
												cout << "Введите вес преподавателя " << endl;
												cin >> weight;
												cout << "Введите страну проживания " << endl;
												cin >> country;
												cout << "Введите пол " << endl;
												cin >> gender;
												cout << "Введите университет " << endl;
												cin.ignore(256, '\n');
												getline(cin, University);
												cout << "Введите предмет " << endl;
												getline(cin, Subject);
												cout << "Введите кафедру " << endl;
												getline(cin, Cafedra);
												cout << "Введите академическую степень " << endl;
												cin >> Degree;
												cout << "Введите опыт(в годах) " << endl;
												cin >> Experience;
												cout << "Введите оклад " << endl;
												cin >>Salary ;
												cout << "Введите количество работ " << endl;
												cin >> CountOfWorks;
												professor.push_back(new Professor(University, Subject, Cafedra,  Degree, Experience, Salary,CountOfWorks, firstName, lastName, day, month, year, height, weight, country, gender));

												cout << "=========================== " << endl;
												break;
											}

											case 3:
											{
												if (professor.size() > 0)
												{
													int i,x;
													cout << "Удаление преподавателя: " << endl;
													cout << "Выберите номер преподавателя, которого хотите удалить: " << endl;
													cin >> i;
													x = i - 1;
													professor.erase(professor.begin() + x);
													cout << "Преподаватель удален" << endl;
												}
												else
												{
													cout << "Нет преподавателей!" << endl;
												}
												cout << "=========================== " << endl;
												break;
											}
											case 4:
											{
												int i, x;
												cout << "Введите номер преподавателя" << endl;
												cin >> i;
												x = i - 1;
												professor.at(x)->CalculationOfWage();
												break;

											}
											case 5:
											{
												if (professor.size() > 0)
												{
													int i, x;
													cout << "Введите номер преподавателя" << endl;
													cin >> i;
													x = i - 1;
													professor.at(x)->AwardDegree();
												}
												else
												{
												cout << "Нет преподавателей!" << endl;
												}
												cout << "=========================== " << endl;
												break;

											}
											case 6:
											{
												string chosen_cafedra;
												cout << "Выберите кафедру" << endl;
												cin >> chosen_cafedra;
												for (int i =0; i< professor.size(); i++)
												{
													if (professor.at(i)->GetCafedra() == chosen_cafedra)
													{
														cout << i << ")." << " "; professor.at(i)->Print();
													}	
												}
												break;
											}
											case 7:
											{
												cout << "Выход из программы..." << endl;
												system("pause");
												exit(EXIT_SUCCESS);
												break;
											}

											default:
											{
												cerr << "Вы выбрали неверный вариант" << endl;
												cout << "=========================== " << endl;
												system("pause");
												exit(EXIT_FAILURE);
												break;
											}
								}
							break;
					}
					case 4: //exit
					{
						cout << "Выход из программы..." << endl;
						system("pause");
						exit(EXIT_SUCCESS);
						break;		
					}
					default: //error
					{
						cerr << "Вы выбрали неверный вариант" << endl;
						cout << "=========================== " << endl;
						system("pause");
						exit(EXIT_FAILURE);
							break;
					}
			} 
		   
	}
			
}

