#include "Initializer.h"

void Initializer::init(BankUsers*& list, int count) {
	if (list == nullptr && count > 0) {
		list = new BankUsers[count];
	}
	string names[]{
		"Anna", "Dima", "Vanya", "Matvey",
		"Nikita", "Bogdan", "Victor", "Daniil",
		"Alexey", "Maria", "Kate", "Maks",
		"Vanya", "Antony", "Vlad", "Evgeniy",
		"Polina", "Irina", "Milana", "Kirill" };
	double minBal = 0;
	double maxBal = 10000.0;
	int minAge = 14;
	int maxAge = 90;
	for (int i = 0; i < count; i++)
	{
		list[i].setName(names[rand() % 15]);
		list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
	}
}