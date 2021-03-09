#include "Student.h"
#include <iostream>

using namespace std;

void Student::Init(int kurs, Student::Man man)
{
	Setkurs(kurs);
	Setman(man);
}
void Student::Display() const
{
	man.Display();
}
void Student::Read()
{
	int kursslav;
	Student::Man m;
	cout << "Про людину: " << endl;
	m.Read();
	cout << "Курс = ";cin >> kursslav;
	Init(kursslav, m);
	cout << "Про людину:" << endl;
	Kurs(kurs);
}
void Student::Man::Init(string name, int age, string sex, double weight)
{
	Setname(name);
	Setage(age);
	Setsex(sex);
	Setweight(weight);
}
void Student::Man::Display() const
{
	cout << "Ім'я = " << name << endl;
	cout << "Вік = " << age << endl;
	cout << "Стать = " << sex << endl;
	cout << "Вага = " << weight << endl;
}
void Student::Man::Read()
{
	string name;
	int age;
	string sex;
	double weight;
	cout << "Вкажіть ім'я = ";cin >> name;
	cout << "Вкажіть вік = ";cin >> age;
	cout << "Вкажіть стать = ";cin >> sex;
	cout << "Скажіть вагу = ";cin >> weight;
	Init(name, age, sex, weight);
}
int Student::Kurs(int kurs) 
{
	int K = kurs;
	if (kurs < 6)
		K = kurs + 1;
	else
		cout << "6 - Це випускний курс!" << kurs << endl;
	cout << "Курс = " << K << endl;
	return kurs;
}