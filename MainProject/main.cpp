#include "Student.h"

int main() {
	Student st1, st2;
	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;


	st1.name = "Ivan";
	st1.age = 15;
	st1.mark = 4.5;
	st1.alive = true;

	string t = st1.mark > st2.mark ? st1 : st2;

	cout << "Best student name is " << t.name << endl;

	int n = 10;
	
	
	return 0;
}