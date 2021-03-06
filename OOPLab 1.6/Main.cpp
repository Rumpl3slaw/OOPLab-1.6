#include "Student.h"
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Student s;
	s.Read();
	s.Display();

	return 0;

}