#include <iostream>
#include "Initializer.h"
#include "Manager.h"
using namespace std;

int main() {
	int count;
	BankUsers us;


	cout << "Input number of users: ";
	cin >> count;

	BankUsers* list = nullptr;
	Initializer initializer;
	Manager manager;
	initializer.init(list, count);
	cout << "List of users:\n";
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}
	int size = 0;
	
	BankUsers* bestlist = manager.getBestUsers(list, count, &size);
	
	cout << "List of best users:\n";
	for (int i = 0; i < size; i++)
	{
		cout << bestlist[i].toString() << endl;
	}
	
	BankUsers* worstlist = manager.getBestUsers(list, count, &size);
	
	cout << "List of worst users:\n";
	for (int i = 0; i < size; i++)
	{
		cout << worstlist[i].toString() << endl;
	}

	delete[] list;
	delete[] bestlist;
	delete[] worstlist;
	return 0;
}