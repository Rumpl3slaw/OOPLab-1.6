#pragma once
#include <string>

using namespace std;

class Student
{
private:
	int kurs;

	class Man 
	{
	private:
		string name;
		int age;
		string sex;
		double weight;
	public:
		string Getname()  { return name; }
		int Getage()  { return age; }
		string Getsex()  { return sex; }
		double Getweight()  { return weight; }

		void Setname(string name) { this->name = name; }
		void Setage(int age) { this->age = age; }
		void Setsex(string sex) { this->sex = sex; }
		void Setweight(double weight) { this->weight = weight; }

		void Init(string name, int age, string sex, double weight);
		void Display() const;
		void Read();


	};

	Man man;
public:
	int Getkurs()const { return kurs; }
	Student::Man Getman()const { return man; }

	void Setkurs(int kurs) { this->kurs = kurs; }
	void Setman(Student::Man man) { this->man = man; }


	void Init(int kurs, Student::Man man);
	void Display() const;
	void Read();
	int Kurs(int kurs);



};