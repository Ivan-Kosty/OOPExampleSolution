#include <iostream>
#include "Initializer.h"
using namespace std;

int main() {
	int count;
	cout << "Input number of users: ";
	cin >> count;

	BankUsers* list = nullptr;
	Initializer initializer;
	initializer.init(list, count);
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}
	return 0;
}