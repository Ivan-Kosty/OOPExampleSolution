#include "BankUsers.h"
class Initializer {
public:
	void init(BankUsers*& list, int count) {
		if (list == nullptr && count > 0) {
			list = new BankUsers[count];
		}
		string names[]{
			"Anna", "Dima", "Vanya", "Matvey",
			"Nikita", "Bogdan", "Victor", "Daniil",
			"Alexey", "Maria", "Kate", "Maks",
			"Vanya", "Antony", "Vlad", "Evgeniy",
			"Polina", "Irina", "Milana", "Kirill" };
		int minBal = 0;
		int maxBal = 100000.0;
		int minAge = 14;
		int maxAge = 90;
		for (int i = 0; i < count; i++)
		{
			list[i].name = names[rand() % 20];
			list[i].age = rand() % (maxAge - minAge + 1) + minAge;
			for (int j = 0; j < list[i].balance; j++)
			{
				list[i].balance = rand() % (maxBal - minBal + 1) + minBal;
			}
		}
	}
};