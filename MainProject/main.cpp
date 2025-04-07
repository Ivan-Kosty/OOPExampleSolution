#include "BankUsers.h"
#include "Workers.h"

void edit(BankUsers user) {
	user.name = "Vladimir";
	user.age = 21;
	user.balance = 749;
	user.anycredit = false;
}
int main() {
	BankUsers* list = nullptr;
	int size;
	cout << "Input numbers of users: ";
	cin >> size;
	list = new us[size];
	cout << "Input data of students:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "name: ";
		cin >> list[i].name;
		cout << "age: ";
		cin >> list[i].age;
		cout << "balance: ";
		cin >> list[i].balance;
		cout << "credit?(y/n): ";
		char answer;
		cin >> answer;
		list[i].anycredit = islower(answer) == 'y';
}